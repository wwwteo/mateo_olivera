#include <Arduino_FreeRTOS.h>
#include "PID_RT.h"
#include "AccelStepper.h"

// Define stepper motor connections and motor interface type.
// Motor interface type must be set to 1 when using a driver
#define dirPin 4
#define stepPin 5
#define motorInterfaceType 1

PID_RT PID;

const int PWM_PIN = 3;  // UNO PWM pin
int op = 0;
float input = 0;

const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to
const int analogOutPin = 9; // Analog output pin that the LED is attached to
float m = 0.0;
float tempF = 0.0;
int sensorValue = 0;        // value read from the pot
long int sensorValue1 = 410.0 ;
long int sensorValue2 = 668.0;
int temperatura1 = 0;
int temperatura2 = 500;
int offset = 25;
String inString = "";

int outputValue = 0;        // value output to the PWM (analog out)
int SerialComando = 0;

int lectura_pote = 0;
const int POTE_PIN = A2;  // UNO PWM pin

AccelStepper stepper = AccelStepper(motorInterfaceType, stepPin, dirPin);

void TaskTemp(void *pvParameters)
{
  (void) pvParameters;

  while (true)
  {
    lectura_pote = analogRead(POTE_PIN);
    sensorValue = analogRead(analogInPin);
    tempF = (float)(m * (sensorValue - sensorValue2) + temperatura2 - offset);
    input = tempF;

    if (PID.compute(input))
    {
      op = PID.getOutput();
      analogWrite(PWM_PIN, op);
    }
  }
}

void TaskStepper(void *pvParameters)
{
  (void) pvParameters;

  while (true)
  {
    lectura_pote = analogRead(POTE_PIN);
    digitalWrite(dirPin, HIGH);    // cambiamos de dirección segun pulsador
    lectura_pote = map(lectura_pote,0,1024,900,2500);  // adaptamos el valor leido a un retardo
    digitalWrite(stepPin, HIGH);         // Aqui generamos un flanco de bajada HIGH - LOW
    delayMicroseconds(5);              // Pequeño retardo para formar el pulso en STEP
    digitalWrite(stepPin, LOW);         // y el A4988 de avanzara un paso el motor
    delayMicroseconds(lectura_pote); // generamos un retardo con el valor leido del potenciometro

  }
}

//void TaskPrint(void *pvParameters)
//{
//  (void) pvParameters;
//
//  while (true)
//  {
//
//    Serial.print(" op: ");
//    Serial.print(op);
//    Serial.print(" ");
//    Serial.print(tempF);
//    Serial.println("°C");
//    Serial.print(" Potenciómetro: ");
//    Serial.print(lectura_pote);
//    Serial.print(" ");
//    delay(2000);
//  }
//}

void setup()
{
  Serial.begin(9600);

  stepper.setMaxSpeed(1000);

  PID.setPoint(100);
  PID.setOutputRange(0, 255);   //  PWM range
  PID.setInterval(50);
  PID.setK(10, 1, 15);
  PID.start();

  Serial.print("La pendiente del sistema es m=(y2-y1)/(x2-x1)=");
  m = (float)((temperatura1 - temperatura2) / ((float)sensorValue1 - (float)sensorValue2));
  Serial.println(m);

  xTaskCreate(
    TaskTemp
    ,  "Control de temperatura"    // Nombre de la tarea
    ,  128     // Tamaño de la pila de la tarea
    ,  NULL
    ,  3      // Prioridad, siendo 0 la de menor prioridad, y 3 la de mayor
    ,  NULL );

  xTaskCreate(
    TaskStepper
    ,  "Control de pasos del motor"    // Nombre de la tarea
    ,  128     // Tamaño de la pila de la tarea
    ,  NULL
    ,  2// Prioridad, siendo 0 la de menor prioridad, y 3 la de mayor
    ,  NULL );

//  xTaskCreate(
//    TaskPrint
//    ,  "impresion en pantalla de datos"    // Nombre de la tarea
//    ,  128     // Tamaño de la pila de la tarea
//    ,  NULL
//    ,  0      // Prioridad, siendo 0 la de menor prioridad, y 3 la de mayor
//    ,  NULL );
}

void loop()
{
}
