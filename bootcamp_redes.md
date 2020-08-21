
## Bootcamp de redes
#### Juan José Herrera Rodríguez 
#### Carnet B83878

1- Según Kirch y Dawson (2000) una interfaz de red consiste en una interfaz abstracta por donde se puede acceder a un hardware que se utiliza en un entorno de red. El conjunto de operaciones que ofrece una interfaz de red son iguales para todos los tipos de hardware y en donde se trata con el envío y recepción de paquetes. Una interfaz de red se identifica por medio de una dirección IP, que es distinta al nombre de la interfaz (pp. 59).

El resultado de **ifconfig**  en el ordenador se puede ver en los apéndices **A** y **B**

Interfaces de red en el computador según los apéndices **A** y **B**:

**en0**: interfaz de WIFI
**gif0**
**stf0**
**en1**: interfaz de Thunderbolt
**en2**: interfaz de Thunderbolt
**bridge0**: interfaz de Thunderbolt bridge
**p2p0**
**awdl0**
**llw0**
**utun0**
**utun1**
**utun2**
**utun3**
**vboxnet0**

2- Según Kirch y Dawson (2000) una red en el universo TCP/IP es un conjunto de dispositivos conectados, que corresponde a la parte de una dirección ip que enmascara la netmask. Un host corresponde a un dispositivo conectado a la red, que corresponde a la parte de una dirección ip que no enmascara la netmask  (pp. 59-61).

Hosts y redes por cada Interfaz de red en el computador según los apéndices **A** y **B**:

**en0**: 
- red: 192.168.1.0
- host: 7

**gif0**
**stf0**
**en1**
**en2**
**bridge0**
**awdl0** 
**llw0**
**utun0**
**utun1**
**utun2**
**utun3**
**vboxnet0**

3- Según Latin@s en Linz (2017) una interfaz loopback es una interfaz virtual que representa al dispositivo propio. Se pueden crear tantas interfaces loopback como sea necesario. Son utilizadas para servir de ID de router si están configuradas con direcciones IP,  ya que estas interfaces nunca caen. Por ello los protocolos de enrutamiento permanecen latentes y también se utiliza esta interfaz para representar al dispositivo propio, independientemente de cualquier dirección ip. Localhost no es visible desde el exterior y tampoco la interfaz loopback.

4- Según Liu et Al (2004) Un firewall consiste en un software o hardware que comprueba la información de una red para ver si es conveniente bloquearla o no.
En el apéndice **G** se puede ver el comando para verificar si hay un firewall operativo en la máquina. En el apéndice **H** se observa el comando para habilitar el firewall y en el apéndice **I** se ve el comando para desabilitar el firewall.

5- Según Mitchel (2015) un puerto es un conector externo o interno para comunicar dispositivos físicos o digitales. Por estos medios se envían y se reciben datos. Según Chavez (2016) los puertos bien conocidos son puertos cuyo rango va del 0 al 123. Estos se encuentran reservados para protocolos ya establecidos como HTTP y SSH.
 
6- En el apéndice **C** se puede ver como la máquina B se queda escuchando en el puerto 10002 a recibir un mensaje de la máquina A y la máquina B le contesta una vez recibe el mensaje de la máquina A.

En el apéndice **D** puede ver como la máquina A se queda escuchando en el puerto 2000 a recibir un mensaje de la máquina B y la máquina A le contesta una vez recibe el mensaje de la máquina B.

7- En los apéndices **J**, **K**,**M**,**N** y **O** se puede observar que usando nc en modo cliente, se conectó al servidor de www.google.com y la respuesta fue lo mostrado en esos apéndices en donde se incluye un documento html enorme.

8- En el apéndice **E** y **F** se puede ver el resultado de la ejecución del comando solicitado, donde se ve que en ese momento solo había un puerto abierto en la máquina A.
### Referencias Bibliográficas

Chavez, A. (2016). _Puertos bien conocidos, puertos registrados y puertos efímeros_. Alan Chavez. https://alanchavez.com/puertos-bien-conocidos-puertos-registrados-y-puertos-efimeros/

Kirch, O., & Dawson, T. (2000). Guía de 		Administración de Redes con Linux. _Varsovia: OReilly_.

Latin@s en Linz. (2017). _¿Para que se Utiliza la interfaz Loopback en protocolos de ruteo dinámico como OSPF?_ segweb.blogspot. http://segweb.blogspot.com/2011/10/si-tienes-informacion-adicional-sobre_17.html

Liu, A. X., Gouda, M. G., Ma, H. H., & Ngu, A. H. (2004, December). Firewall queries. In _International Conference On Principles Of DIstributed Systems_ (pp. 197-212). Springer, Berlin, Heidelberg.### Apendices

Mitchell, B. (2015). _Computer Ports and Their Role in Computer Networking_. Lifewire. https://www.lifewire.com/computer-port-usage-817366
### Apéndices
**A**
`![](``captura1``.png)`

**B**
`![](``captura2``.png)`

**C**
`![](``captura3``.png)`

**D**
`![](``captura4``.png)`

**E**
`![](``captura5``.png)`

**F**
`![](``captura6``.png)`

**G**
`![](``captura7``.png)`

**H**
`![](``captura8``.png)`

**I**
`![](``captura9``.png)`

**J**
`![](``captura10``.png)`

**K**
`![](``captura11``.png)`


**M**
`![](``captura12``.png)`

**N**
`![](``captura13``.png)`

**O**
`![](``captura14``.png)`
