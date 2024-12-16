---
hide:
    - toc
---

# Proyecto Final 

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


<div align="center"><iframe src="https://drive.google.com/file/d/1CxVmuUZaR4Hmsm0SG9KRMDpiwuOQBgGK/preview" width="320" height="480" allow="autoplay"></iframe></div>

<div align="center"><iframe src="https://drive.google.com/file/d/1CwrK8LxPcBmXv5usl4UobvR5QuKEPIEe/preview" width="320" height="480" allow="autoplay"></iframe></div>

<div align="center"><iframe src="https://drive.google.com/file/d/1CsliC7mYe6LqUA7EEhlle1k6dHPWOWeY/preview" width="320" height="480" allow="autoplay"></iframe></div>

### Testeo del prototipo

<div align="center"><iframe src="https://drive.google.com/file/d/1CfxG6XUTK29Ds0dZ7Nd_w6k63qQeTJX9/preview" width="320" height="480" allow="autoplay"></iframe></div>

<div align="center"><iframe src="https://drive.google.com/file/d/1C_BDeN6T2nEBz6Jxfz2CtjFvOmw5nCKf/preview" width="640" height="480" allow="autoplay"></iframe></div>



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


<div align="center"><iframe src="https://drive.google.com/file/d/1CZ90vXjCpaDcdkGNDXaiNp4sGLWoqDiK/preview" width="640" height="480" allow="autoplay"></iframe></div>

### Teseo del material

<div align="center"><iframe src="https://drive.google.com/file/d/1CnK2vZFcaYzdLvnv4cKpDHadDCB5SScW/preview" width="320" height="480" allow="autoplay"></iframe></div>

<div align="center"><iframe src="https://drive.google.com/file/d/1C-f7bWFb9ZG7N8PuT_JDYFl72ks-Cj0M/preview" width="640" height="700" allow="autoplay"></iframe></div>

### Manual de montaje de kit 

<div align="center"><iframe src="https://docs.google.com/presentation/d/1JmIEiexn-veYzaz4ns18bn1vDDY3XuGU4As6_H0PFB0/preview" width="640" height="480" allow="autoplay"></iframe></div>
