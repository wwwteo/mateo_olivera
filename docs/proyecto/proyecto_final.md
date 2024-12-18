---
hide:
    - toc
---

# Proyecto Final 

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/tira.gif"></div>

## Introducción 


Cómo requisito formal de la Especialización en Fabricación Digital se pide que cada participante presente un proyecto final. Esto es lo lógico, lo que desde un principio nos quedó claro, pero lo que intentaré en esta sección de la documentación es expresar por qué elegí este proyecto y no otro con una temática diferente. También contar la historia de su surgimiento y el proceso que se fue dando mientras transitamos por los diferentes módulos técnicos, de diseño e innovación del curso los cuales busqué bajar a tierra mediante la aplicación de estas nuevas herramientas en lo que hoy termina siendo mi proyecto final.


La principal temática que aborda este proyecto es la reutilización de las botellas PET (Tereftalato de polietileno) para su aprovechamiento cómo materia prima para impresión 3D. La problemática que se busca atender en este desarrollo no es específicamente la reducción de la contaminación en el mundo por el uso de este producto descartable, sinó el dar un claro mensaje de que con pequeñas acciones es posible dar una segunda vida a un valioso material que ya no será un desecho y así como también concientizar que reciclar va más allá de la clasificación y posterior descarte.

Para ello, todo el desarrollo terminó decantando en dos sub-proyectos que están directamente relacionados. El primero, inspirado por las ganas de un grupo de estudiantes de secundaria de un centro educativo en Fray Bentos, que se acercaron al Laboratorio de Innovación Abierta de UTEC con el afán de montar una máquina tipo recreator3d para un club de ciencias. Cómo este grupo no contaba con los conocimientos ni el tiempo para conseguirlo les propusimos crear un kit base con componentes sencillos y de uso doméstico para posteriormente sumarle electrónica y programación. Esto me inspiró a compartir esta experiencia a otros estudiantes lo que me llevó a crear un kit educativo de reciclaje de botellas PET para la generación de filamento. 

El segundo sub-proyecto busca reducir los pasos del proceso de reutilizar la botella para imprimir en 3D ya que con este kit denominado TIRA todo se reduce a introducir la tira de botella en el nuevo extrusor, ahora la materia prima es la tira de botella, no el filamento.


##  Diseño y Prototipado

A lo largo de los módulos técnicos se pudo apreciar el progreso del kit educativo, desde la concepción del logo, las primeras ideas de diseño utilizando las herramientas de diseño CAD hasta las primeras pruebas de concepto y test de funcionamiento fueron quedando en el registro. 

<div align="center"><iframe width="100%" height="800" src="https://wwwteo.github.io/mateo_olivera/tecnicos/mt02/#01"></iframe>
</div>

<div align="center"><iframe width="100%" height="800" src="https://wwwteo.github.io/mateo_olivera/tecnicos/mt02/#02-modelo-3d-manivela"></iframe>
</div>


### Primer prototipo


<div align="center"><iframe src="https://drive.google.com/file/d/1CxVmuUZaR4Hmsm0SG9KRMDpiwuOQBgGK/preview" width="640" height="960" allow="autoplay"></iframe></div>

<div align="center"><iframe src="https://drive.google.com/file/d/1CwrK8LxPcBmXv5usl4UobvR5QuKEPIEe/preview" width="640" height="960" allow="autoplay"></iframe></div>

<div align="center"><iframe src="https://drive.google.com/file/d/1CsliC7mYe6LqUA7EEhlle1k6dHPWOWeY/preview" width="640" height="960" allow="autoplay"></iframe></div>

### Testeo del prototipo

<div align="center"><iframe src="https://drive.google.com/file/d/1CfxG6XUTK29Ds0dZ7Nd_w6k63qQeTJX9/preview" width="640" height="960" allow="autoplay"></iframe></div>

<div align="center"><iframe src="https://drive.google.com/file/d/1C_BDeN6T2nEBz6Jxfz2CtjFvOmw5nCKf/preview" width="640" height="960" allow="autoplay"></iframe></div>



<html>
    <head>
        <style>
            .slide {
                position: relative;
                box-shadow: 0px 1px 6px rgba(0, 0, 0, 0.64);
                margin-top: 26px;
            }
            .slide-inner {
                position: relative;
                overflow: hidden;
                width: 100%;
                height: calc( 500px + 3em);
            }
            .slide-open:checked + .slide-item {
                position: static;
                opacity: 100;
            }
            .slide-item {
                position: absolute;
                opacity: 0;
                -webkit-transition: opacity 0.6s ease-out;
                transition: opacity 0.6s ease-out;
            }
            .slide-item img {
                display: block;
                height: auto;
                max-width: 100%;
            }
            .slide-control {
                background: rgba(0, 0, 0, 0.28);
                border-radius: 50%;
                color: #fff;
                cursor: pointer;
                display: none;
                font-size: 40px;
                height: 40px;
                line-height: 35px;
                position: absolute;
                top: 50%;
                -webkit-transform: translate(0, -50%);
                cursor: pointer;
                -ms-transform: translate(0, -50%);
                transform: translate(0, -50%);
                text-align: center;
                width: 40px;
                z-index: 10;
            }
            .slide-control.prev {
                left: 2%;
            }
            .slide-control.next {
                right: 2%;
            }
            .slide-control:hover {
                background: rgba(0, 0, 0, 0.8);
                color: #aaaaaa;
            }
            #slide-1:checked ~ .control-1,
            #slide-2:checked ~ .control-2,
            #slide-3:checked ~ .control-3 {
                display: block;
            }
            .slide-indicador {
                list-style: none;
                margin: 0;
                padding: 0;
                position: absolute;
                bottom: 2%;
                left: 0;
                right: 0;
                text-align: center;
                z-index: 10;
            }
            .slide-indicador li {
                display: inline-block;
                margin: 0 5px;
            }
            .slide-circulo {
                color: #828282;
                cursor: pointer;
                display: block;
                font-size: 35px;
            }
            .slide-circulo:hover {
                color: #aaaaaa;
            }
            #slide-1:checked ~ .control-1 ~ .slide-indicador
                 li:nth-child(1) .slide-circulo,
            #slide-2:checked ~ .control-2 ~ .slide-indicador
                  li:nth-child(2) .slide-circulo,
            #slide-3:checked ~ .control-3 ~ .slide-indicador
                  li:nth-child(3) .slide-circulo {
                color: #428bca;
            }
            #titulo {
                width: 100%;
                position: absolute;
                padding: 0px;
                margin: 0px auto;
                text-align: center;
                font-size: 27px;
                color: rgba(255, 255, 255, 1);
                font-family: 'Open Sans', sans-serif;
                z-index: 9999;
                text-shadow: 0px 1px 2px rgba(0, 0, 0, 0.33),
                     -1px 0px 2px rgba(255, 255, 255, 0);
            }
        </style>
    </head>
    <body>
        <div class="slide">
            <div class="slide-inner">
                <input class="slide-open" type="radio" id="slide-1"
                      name="slide" aria-hidden="true" hidden="" checked="checked">
                <div class="slide-item">
                   <div align="center"><iframe src="https://drive.google.com/file/d/1CRH9OH38-OGoGFHtxHNqPHaqu_NyLvVd/preview" width="640" height="480" allow="autoplay"></iframe></div>
                </div>
                <input class="slide-open" type="radio" id="slide-2"
                      name="slide" aria-hidden="true" hidden="">
                <div class="slide-item">
                   <div align="center"><iframe src="https://drive.google.com/file/d/1CIGjNQ2kzuWJoVrxDF-OUPk6JAi-9f_Q/preview" width="640" height="480" allow="autoplay"></iframe></div>
                </div>
                <input class="slide-open" type="radio" id="slide-3"
                      name="slide" aria-hidden="true" hidden="">
                <div class="slide-item">
                   <div align="center"><iframe src="https://drive.google.com/file/d/1CEMpNHKxhmm-Le5-83-P5ECrFfo72qag/preview" width="640" height="480" allow="autoplay"></iframe></div>
                </div>
                <label for="slide-3" class="slide-control prev control-1">‹</label>
                <label for="slide-2" class="slide-control next control-1">›</label>
                <label for="slide-1" class="slide-control prev control-2">‹</label>
                <label for="slide-3" class="slide-control next control-2">›</label>
                <label for="slide-2" class="slide-control prev control-3">‹</label>
                <label for="slide-1" class="slide-control next control-3">›</label>
                <ol class="slide-indicador">
                    <li>
                        <label for="slide-1" class="slide-circulo">•</label>
                    </li>
                    <li>
                        <label for="slide-2" class="slide-circulo">•</label>
                    </li>
                    <li>
                        <label for="slide-3" class="slide-circulo">•</label>
                    </li>
                </ol>
            </div>
        </div>
    </body>
</html>


<div align="center"><iframe src="https://drive.google.com/file/d/1CZ90vXjCpaDcdkGNDXaiNp4sGLWoqDiK/preview" width="640" height="960" allow="autoplay"></iframe></div>

### Teseo del material

<div align="center"><iframe src="https://drive.google.com/file/d/1CnK2vZFcaYzdLvnv4cKpDHadDCB5SScW/preview" width="640" height="960" allow="autoplay"></iframe></div>

<div align="center"><iframe src="https://drive.google.com/file/d/1C-f7bWFb9ZG7N8PuT_JDYFl72ks-Cj0M/preview" width="640" height="700" allow="autoplay"></iframe></div>

#### Manual de montaje de kit 

<div align="center"><iframe src="https://docs.google.com/presentation/d/1JmIEiexn-veYzaz4ns18bn1vDDY3XuGU4As6_H0PFB0/preview" width="640" height="960" allow="autoplay"></iframe></div>


### Segundo prototipo

Para el desarrollo de este segundo prototipo se busca redoblar la apuesta al intentar extruir una tira de entre 8 y 10 mm de ancho. Para ello la idea es calentar un pico metálico (reciclado de una pistola de silicona) y empujar la tira hacia el mismo. Para lograrlo es necesario aumentar la temperatura en dicho pico por lo que deberemos agregarle una nueva resistencia que pueda proporcionar ese calor.


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/IMG_20240831_182359.jpg"></div>

Se testeó esta resistencia de estufa eléctrica.

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/IMG_20240831_192908.jpg"></div>

Al quebrarla se constató que el filamento es muy frágil, se desintegra al tocarlo. Es necesario acudir a una segunda opción. 

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/IMG_20240831_193213.jpg"></div>


<div align="center"><iframe src="https://drive.google.com/file/d/1OaN1u3udYixfFL_CpLp42ZdTW0IcLMmn/preview" width="640" height="960" allow="autoplay"></iframe></div>

En clase, al plantear la problemática, Edu comenta el potencial del hilo de nicrom el cual en Uruguay se consigue pero por grandes cantidades y resulta bastante costoso para una prueba por lo que acudí a reciclarlo de una vieja tostadora. 

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/IMG_20240831_210050.jpg"></div>

Logré extraer casi 2 metros, para esta prueba necesitaré 50 cm.

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/IMG_20240831_214740.jpg"></div>

Para el armado fue necesario raspar el cilindro para emparejarlo y dejarlo listo para aislarlo con cinta adhesiva térmica. 


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/IMG_20240831_194150.jpg"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/IMG_20240831_194314.jpg"></div>

Para controlar la temperatura del extrusor en primera instancia se utilizará el control PID implementado en el MT04.


<div align="center"><iframe width="100%" height="800" src="https://wwwteo.github.io/mateo_olivera/tecnicos/mt02/#01"></iframe>
</div>


<div align="center"><iframe width="100%" height="800" src="https://wwwteo.github.io/mateo_olivera/tecnicos/mt04/#01"></iframe>
</div>


<div align="center"><iframe src="https://drive.google.com/file/d/1OdQxKCVn5HRmdHpTPriG_yU37jlZNCkn/preview" width="640" height="960" allow="autoplay"></iframe></div>

Entonces ya podemos probar cómo el material debería ser empujado hacia la boquilla.

<div align="center"><iframe src="https://drive.google.com/file/d/1P6Jr8lLTwTXPHd2DbmsFKgD6i9Ja7cjl/preview" width="640" height="960" allow="autoplay"></iframe></div>

De esta prueba podemos observar que para que el material llegue a la boquilla empujado por la consistencia del propio material este deberá tener un doblez que haga de nervio y así mantener un flujo consistente. 


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531088734.jpg"></div>

Entonces fue necesario bocetar algunas ideas iniciales para empezar a materializar el sistema de tracción de dicha tira.


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/IMG_20240903_212521.jpg"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/IMG_20240903_212600.jpg"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/IMG_20240903_212654.jpg"></div>

La herramienta elegida para pasar del papel a los bits es  Onshape, en este entorno se logró obtener el siguiente modelo a utilizar en las Anet A8 del LabA del ITSO. No es la primera vez que estas máquinas son utilizadas para probar conceptos ya que se tratan de los mismos equipos que se utilizaron en la edición anterior del EFDI para modificar el extrusor que se usaría para imprimir con pasta.


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/cad.png"></div>

Este prototipo está compuesto por varias partes y reutiliza elementos de la propia impresora como pueden ser el motor de pasos y el termistor. Además la base se atornilla a los mismos rieles de la impresora. 

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/expasta.gif"></div>

Esta base está impresa en PLA, tanto la polea como la rueda motriz fueron impresas en 2 materiales mediante FDM. Si bien las paredes son de TPU para conseguir mayor adherencia con el plástico de la botella el interior está hecho en PLA ya que debe ser rígido y encastrar en el eje del motor sin deformarse. 

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531323835.jpg"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324458.jpg"></div>

Para este prototipo se elimina la sección cilíndrica de la boquilla para evitar que el calor deforme la tira antes de que llegue a la zona caliente, se procedió a cortar la pieza.


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324582.jpg"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324567.jpg"></div>

La polea lleva en su interior un rodamiento 608 el cual es necesario incrustarlo a presión, en este caso se utilizó la morsa para que el mismo se ubique en su posición. 


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324443.jpg"></div>

Así es cómo se ven la polea, la rueda motriz y el motor ya ubicados en la base desde un plano superior.

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324368.jpg"></div>

En esta prueba de tracción del material se puede apreciar cómo las deformidades de la polea y rueda motriz generan picos en los cuales el motor de fuerza demasiado perdiendo pasos.


<div align="center"><iframe src="https://drive.google.com/file/d/1lktEsvEjF99o7t-PxwQIlmBhpmqFIxYO/preview" width="640" height="960" allow="autoplay"></iframe></div>

Las piezas que corresponden a la carcasa del extrusor, las condiciones de trabajo son diferentes debido a que estas estarán expuestas a temperaturas de 230 - 240 °C lo que implica un gran desafío. Para este primer prototipo se utilizará la resina High Temp V2 de Formlabs y la impresora Form 3. 


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/generandoimpresion.png"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/impResina.png"></div>

<div align="center"><iframe src="https://drive.google.com/file/d/1B25pQRPtMxr7ndUhTKMdObe3lEVDx2iQ/preview" width="640" height="960" allow="autoplay"></iframe></div>

Cómo se puede apreciar en esta primera versión de la carcasa se pueden apreciar orificios de ventilación los cuales tienen la función de evitar que el material se deforme antes de llegar a la boquilla. Lamentablemente esto hizo que la estructura quede demasiado débil por lo que en la próxima versión se eliminó.

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324525.jpg"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324514.jpg"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324503.jpg"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324493.jpg"></div>


Ahora unificamos ambas partes y testeamos el funcionamiento antes de pasar a montar la estructura en la impresora.


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324251.jpg"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324238.jpg"></div>

<div align="center"><iframe src="https://drive.google.com/file/d/1lGERW37ch3T543npdDj1ToDsJGRzpdMP/preview" width="640" height="960" allow="autoplay"></iframe></div>

#### Montaje de extrusor en la impresora 3D


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324028.jpg"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324008.jpg"></div>


En este montaje se utiliza la electrónica de la impresora 3D ya que la idea es crear un kit compatible con una impresora universal, es decir: el sensor de temperatura utilizado es el propio de la impresora 3D extraído del extrusor original, el motor de pasos es el propio de la impresora y en lugar del hotend original se conectaron los dos extremos del hilo de nicrom, el cual tiene un impedancia de 7.7 ohm mientras que el hotend original es de 8 ohm.
  

<div align="center"><iframe src="https://drive.google.com/file/d/1kd4pZtqoNL1plh6AKk9LOsqRVetlIgvo/preview" width="640" height="960" allow="autoplay"></iframe></div>

En la siguiente prueba de extrusión a 230°C se puede apreciar el primer error de diseño: rueda motriz con diámetro demasiado grande. Esto, sumado a las imperfecciones de la textura de ambas piezas hacen que se fuerce el motor provocando la pérdida de pasos e impidiendo la correcta extrusión. 

<div align="center"><iframe src="https://drive.google.com/file/d/1kc76_8uvjP-mztxPq_mxjSSMJf8nhtR1/preview" width="640" height="960" allow="autoplay"></iframe></div>

Y aquí el segundo gran error, de índole catastrófico: resquebrajamiento del material. El puntero de la carcasa no es capaz de soportar la temperatura y la presión del material al ser empujado por la boquilla. Esto llevó a la rotura, justo en la rosca de la pieza. 


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531323853.jpg"></div>

#### Mejoras realizadas

Para intentar corregir la pérdida de pasos del motor y aumentar así el torque con el que se empuja el material se procedió a rediseñar la polea y la rueda motriz, por ende se debió reimprimir el soporte con nuevas modificaciones, entre ellas una nueva guía para el material. 


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531323817.jpg"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531324063.jpg"></div>

También se volvieron a imprimir las piezas de resina y se realizó minuciosamente el post-proceso, que involucra: 5 minutos de enjuague, 120 minutos de curado y 180 minutos de horneado a 80°C (este último paso se realizó en el Laboratorio de electrónica dónde tienen un horno con estas características para hornear placas PCB).


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531323616.jpg"></div>

#### ¡Últimas pruebas antes de la presentación final del proyecto! 

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/moai.png"></div>



El modelo elegido para la prueba es un moai de estos que se ven en las islas de pascua si no mal entiendo. El Slicer utilizado para crear los Gcode a utilizar en la Anet es Ultimaker Cura. 

Lastimosamente en el precalentamiento del extrusor ya se marcó una grieta en el puntero de la carcasa del extrusor. Para prevenir que esto impida realizar las pruebas procedí a buscar un refuerzo estructural. 

<div align="center"><iframe src="https://drive.google.com/file/d/1j2lVHBAzHSAs0CC8QTohevPtn_dNtyLJ/preview" width="640" height="960" allow="autoplay"></iframe></div>

Lo primero que se me ocurrió fue envolverlo en alambre, el alambre es un recurso muy valioso en nuestro país, muchas cosas se solucionan con este elemento y se puede encontrar en casi cualquier parte. 

Creo que aunque puede funcionar quedará mejor solucionarlo con fabricación digital por lo que opté por cortar una especie de refuerzo que pueda atornillar y darle mayor resistencia.


<div align="center"><iframe src="https://drive.google.com/file/d/1iliG2YowILiZc_kR1SPZTRPtaHmeX7el/preview" width="640" height="960" allow="autoplay"></iframe></div>


<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531323497.jpg"></div>

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531323487.jpg"></div>


El material a utilizar se ve así: 

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531323387.jpg"></div>



Prueba #1: Arrancó bien, hubo problemas en la adherencia y fue necesario abortar.


<div align="center"><iframe src="https://drive.google.com/file/d/1iZ-zbfP0c3XPkzVeA-Yx79QmWpdVIXMi/preview" width="640" height="960" allow="autoplay"></iframe></div>

Prueba #2: En esta también hubo mala adherencia, pero lo peor: ya se pudo ver un desprendimiento de casi medio puntero.



<div align="center"><iframe src="https://drive.google.com/file/d/1iRLZXR0Up_jbinFU5SX05ieSVP5grq50/preview" width="640" height="960" allow="autoplay"></iframe></div>

Afortunadamente el refuerzo de acrílico todavía siguió firme, y sostiene lo que le queda de vida al extrusor. 

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531323398.jpg"></div>

Prueba #3: Con la ayuda de la mano del hombre para dar un plus de toque en la polea y compensar el desfase de la boquilla y la tobera se realiza lo que sería hasta el momento la última prueba.



<div align="center"><iframe src="https://drive.google.com/file/d/1hzmnFnJu_fJqj8Z2Pcjd6VtZ8BrworV7/preview" width="640" height="960" allow="autoplay"></iframe></div>

## Conclusiones y Reflexión

En lo personal me encuentro sumamente satisfecho con los resultados obtenidos hasta el momento con las pruebas realizadas y por sobre todo el camino recorrido, gracias a los errores cometidos logré encontrar las debilidades de los dispositivos desarrollados, en este último estas fallas se transformarán en futuras mejoras que sin duda le darán a este proyecto la vuelta de rosca que necesita para poder ser un proyecto replicable, reutilizado y escalado. 

Las experiencias vividas con el kit educativo de reciclaje de filamento manual me genera una expectativa enorme, ya logramos postular esta experiencia a la revista internacional LINKS en la categoría de reseña para el eje temático de Innovación educativa [>>>inserte revista aquí<<<]

La realidad del extrusor de tiras es que se pudo haber abordado de mil maneras, mejores y peores desde el punto de vista del diseño, quizá siquiera el formato de tiras es el ideal para extruir botellas. En lo que sí considero está acertado es en la funcionalidad. Creo que con los recursos que usualmente se disponen en un hogar (obviando las partes impresas y cortadas) es posible recrear este prototipo por un bajísimo costo. Mantengo la idea de que con algunas pocas mejoras este prototipo puede realmente utilizarse a base de tiras de botella.

En lo personal me encantaría que otras instituciones puedan no solo obtenerlo, montar el kit y realizar la práctica, sino que también puedan vivir la experiencia de utilizar las diferentes herramientas de fabricación digital para recrearlo, rediseñarlo y difundirlo pero por sobre todas las cosas generar conciencia de lo valioso que son los recursos que día a día descartamos, que el proceso de reciclaje si sirve y se puede llegar en corto plazo a la reutilización de los desechos.  

Agradezco la oportunidad de haber cursado este proceso, compartir las clases con gente muy crack como lo son mis compañeros y compañeras de generación así como haber podido contar con el feedback de el cuerpo docente que está compuesto de un equipo increíble, referentes en la temática a nivel mundial y con una expertise invaluable. Termino esta reflexión con una imágen del medio moai de pet. ¡Muchas gracias!

<div align="center"><img src="https://github.com/wwwteo/mateo_olivera/raw/main/docs/images/PFI/1734531323287.jpg"></div>
