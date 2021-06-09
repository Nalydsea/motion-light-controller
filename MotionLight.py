from gpiozero import MotionSensor
from time import sleep
import requests

pir = MotionSensor(14)
url = "http://192.168.1.114:80/api/6A69BD6601/lights/2/state"
on_payload = "{\"on\":true}"
off_payload = "{\"on\":false}"
headers = {'Content-Type':'text/plain'}

# Warm up period
sleep(10)

try:
    while True:
        sleep(5)
        pir.wait_for_motion()
        r = requests.put(url, headers=headers, data=on_payload)
        sleep(10)
        pir.wait_for_no_motion()
        r = requests.put(url, headers=headers, data=off_payload)
except KeyboardInterrupt:
    pass