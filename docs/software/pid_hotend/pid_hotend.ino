#include "PID_RT.h"
#define dirPin 4
#define stepPin 5
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

int TiempoAhora;
int periodo = 100;

void setup() {
  Serial.begin(9600);

  PID.setPoint(100);
  PID.setOutputRange(0, 255);   //  PWM range
  PID.setInterval(50);
  PID.setK(10, 1, 15);
  PID.start();
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);
  digitalWrite(dirPin, HIGH);
  calibracionProceso();
}

void loop() {
  lectura_pote = analogRead(POTE_PIN);
  sensorValue = analogRead(analogInPin);
  Serial.print("Sensor PT100 = ");
  Serial.print(sensorValue);
  Serial.print("\t Temperatura = ");
  tempF = (float)(m * (sensorValue - sensorValue2) + temperatura2 - offset);
  Serial.print(tempF);
  Serial.println("°C");

  input = tempF;
  //  input = analogRead(A0);
  if (PID.compute(input))
  {
    op = PID.getOutput();
    analogWrite(PWM_PIN, op);
    Serial.print(" op: ");
    Serial.print(op);
    Serial.print(" ");
  }

 // if (millis() > TiempoAhora + periodo) {
 //   TiempoAhora = millis();
    lectura_pote = map(lectura_pote, 0, 1023, 0, 255); // mapeo el valor de la lectura al rango 0-255
    analogWrite(stepPin, lectura_pote);
 // }

  Serial.print(" Potenciómetro: ");
  Serial.print(lectura_pote);
  Serial.print(" ");
}

void calibracionProceso() {

  Serial.print("La pendiente del sistema es m=(y2-y1)/(x2-x1)=");
  m = (float)((temperatura1 - temperatura2) / ((float)sensorValue1 - (float)sensorValue2));
  Serial.println(m);

}
