# Heartbeat 8266

## For use with ESP8266.   Sends and receives heartbeat messages via MQTT to ensure that services are running.  If a heartbeat is not received then a telegram message is sent as notification of failed service.


### Features:
- [MQTT](https://github.com/knolleary/pubsubclient)
- [Telegram](https://github.com/witnessmenow/Universal-Arduino-Telegram-Bot)
- Web UI, OTA and Captive portal - Based on Tasmota


Original [Video](https://youtu.be/IGB2eRvhvB0) and [source](https://github.com/SensorsIot/Heartbeat8266).  Thanks Andre!


### Installation

I use either [VS Code](https://code.visualstudio.com/) or [Arduino IDE](https://www.arduino.cc/en/software)

1. Set the board type
1. Intall packages
1. Compile and upload
1. Access Web portal (default address is [192.168.4.1](http://192.168.4.1))
1. Set Wifi (reboot and reconnect to new IP)
1. Set other settings via Web UI

