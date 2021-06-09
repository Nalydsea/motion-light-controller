# Motion Light Controller
Raspberry Pi motion sensor can be placed in a room to detect motion then API request is sent to deCONZ via wiFi to turn on Zigbee LED lightbulb.

Devices Used:
------
- Raspberry Pi 4 Model B 4GB ($92.40)

- PIR Infrared Motion Sensor - HC-SR501 ($3.95)

- ConBee II ($79.99)

- Philips Hue 10W ES RGB + White Dimmable Globe ($71.96)

Wiring
======
<table>
  <tr>
    <th>Raspberry Pi</th>     <th>GY-521(HC-SR501)</th></tr>
  <tr><td>5V</td><td>5V</td></tr>
  <tr><td>GND</td><td>GND</td></tr>
  <tr><td>8</td><td>OUT</td></tr>
</table>

Details
----
update with information

Improvements
-----
Separate battery powered motion sensor using ESP32

Automated day and night brightness/colour shifting

Add Ambient Light Sensor to adjust brightness 
