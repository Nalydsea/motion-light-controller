
TCPClient client;
IPAddress server(192,168,1,114);

int inputPin = D0;
int sensorOutput;

void setup() 
{
    pinMode(inputPin, INPUT);
}

void loop()
{
    sensorOutput = digitalRead(inputPin);
    controlLight();
}

void controlLight() 
{
    if (sensorOutput == LOW) 
    {
        turnOff();
        delay(100);
    }
    else if (sensorOutput == HIGH) 
    {
        turnOn();
        delay(60000);
    }
    else
    {
        delay(5000);
    }
}

void turnOn()
{
    client.connect(server, 80);
    client.println("PUT /api/6A69BD6601/lights/2/state HTTP/1.1");
    client.println("Host: 192,168,1,114");
    client.println("Content-Type: text/plain");
    client.println("Content-Length: 12");
    client.println(); 
    client.println("{\"on\": true}");
    Serial.println("request sent");
    client.stop();
}

void turnOff()
{
    client.connect(server, 80);
    client.println("PUT /api/6A69BD6601/lights/2/state HTTP/1.1");
    client.println("Host: 192,168,1,114");
    client.println("Content-Type: text/plain");
    client.println("Content-Length: 11");
    client.println(); 
    client.println("{\"on\": false}");
    Serial.println("request sent");
    client.stop();
}

