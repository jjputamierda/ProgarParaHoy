## Tarea Corta 1

#### Juan José Herrera Rodríguez

#### Carnet: B83878

  

**R1** : Citando a Kurose et Al (2017) los sistemas terminales también también se conocen como hosts, ya que albergan programas de aplicación tales como navegadores web, servidores web, programas cliente de correo electrónico o servidores de correo electrónico. A lo largo de este libro utilizaremos indistintamente los términos host y sistema terminal; es decir, host = sistema terminal. (pp.8)

  

Ya que el autor afirma que la terminología host y sistema similar son para referirse al mismo término, no hay diferencias entre ambos términos.

  

También por la afirmación del autor, los servidores web son programas que corren en una terminal.

  

También según Kurose et Al (2017) algunos tipos de terminales son:

- Servidores

- Computadoras de escritorio

- Dispositivos móviles

- Televisores

- Relojes

- Gafas

- Consolas de juegos

- Termostatos

- Sistemas domésticos de alarma

Todos estos dispositivos que estén conectados a la red Internet son terminales

(pp.2-8)

  

**R8** : Citando a Kurose et Al (2017) Se señala que el cable de cobre es uno de los medios físicos que se utiliza con ethernet sobretodo en entornos de hogar (pp.16)

  

Pero además ethernet se puede usar con cable coaxial a nivel de hogar ya que el acceso a internet y la televisión por cable está ligado fuertemente. además ethernet se puede utilizar con fibra óptica para las interconexiones entre switches, a nivel organizacional.

**R11** :

Hay que recordar que

retardo total de extremo a extremo =

dextremo-extremo =N(dproc+dtrans+dprop)

  

Como entre host emisor y switch hay una velocidad de R1 y el paquete tiene longitud L, se tiene que: dtrans1 = L/R1

  

Como entre el switch y host receptor hay una velocidad de R1 y el paquete tiene longitud L, se tiene que: dtrans2 = L/R2

  

Como se ignoran dproc y dprop entonces se tiene que:

  

dextremo-extremo = L/R1 + L/R2

  

**R18** :

Para obtener el retardo de propagación no se toma en cuenta la longitud del paquete ni la velocidad de transmisión ya que la fórmula según Kurose et Al (2017) obtenerla es d/s y su unidad de medida es en milisegundos (pp.31-32) donde:

- d = distancia entre router A y router B

- s = velocidad de propagación del enlace

  

Para el caso específico del ejercicio, primero se hace una conversión para tener d en metros:

  

- 2500 km = 2500 000 m

  

Ahora se sustituyen los valores de d y s:

  

- d =2500 000 m

- s = 2.5 * 10 ^ 8 m/s

  

Por lo tanto el retardo de propagación es :

  

d/s = 2500 000 / 2.5* 10 ^ 8 = 0.01 s = 10 ms

  
  

**R20** :

  

- Primero el archivo se crea en la capa de aplicación de A y se divide en paquetes.

- Luego se pasa secuencialmente por las capas de transporte, red, enlace y física de esta estación añadiendo las cabeceras de nivel respectivo.

- Seguidamente se propaga por el medio, hasta llegar a la capa física de B, que se encarga de subir los bits a la capa superior.

- Cada capa lee las cabeceras y si son correctos los datos, sube la carga útil a la capa superior, hasta que solo llega el mensaje a la capa de aplicación.

- Cabe resaltar que, aunque las cabeceras cambian, el mensaje se mantiene inalterado.

  

Al pasar los paquetes por el conmutador pasa los datos de un segmento a otro de acuerdo con la dirección MAC de destino de las tramas en la red.

  

Esta situación es análoga a viajar de una ciudad a otra, pues aunque el viajero pregunta por la dirección de destino final, los habitantes le dirán qué salida debe tomar para llegar a su destino.

  

**R25** :

Un host procesa las capas de

aplicación, transporte, red, enlace y física ya que al operar en la capa de aplicación por la interacción humano-computador, requiere de las demás capas.

  

Como un switch es un dispositivo digital lógico de interconexión de equipos que opera en la capa de enlace de datos, requiere también de procesar la capa física.

  

Como el router es el encargado de enrutar el tráfico entre diferentes redes aún estando en diferentes ubicaciones geográficas, opera en la capa de red y requiere de procesar la capa física y la capa de enlace.

  

## Referencias Bibliográficas

Kurose, James F., and Keith W. Ross “Computer Networking: A Top-Down Approach”. Ed. Pearson Education, 7a ed., 2017.
