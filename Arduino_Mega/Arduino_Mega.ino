#include <DHT.h>;
#define MQ4 A0
#define MQ135 A1
#define MQ7 A2
#define MQ6 A3
#define MQ9 A4
#define MQ3 A5
#define MQ2 A6
#define MQ8 A7
#define MQ5 A8
#define DHTPIN 4
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
float voutMQ2;
float MQ2Value;
float voutMQ3;
float MQ3Value;
float voutMQ4;
float MQ4Value;
float voutMQ5;
float MQ5Value;
float voutMQ6;
float MQ6Value;
float voutMQ7;
float MQ7Value;
float voutMQ8;
float MQ8Value;
float voutMQ9;
float MQ9Value;
float voutMQ135;
float MQ135Value;
float hum;
float temp;
void setup() 
{
  // put your setup code here, to run once:
Serial.begin (9600);
pinMode(A0 ,OUTPUT);
pinMode(A1 ,OUTPUT);
pinMode(A2 ,OUTPUT);
pinMode(A3 ,OUTPUT);
pinMode(A4 ,OUTPUT);
pinMode(A5 ,OUTPUT);
pinMode(A6 ,OUTPUT);
pinMode(A7 ,OUTPUT);
pinMode(A8 ,OUTPUT);
dht.begin();
}

void loop() 
{
  // put your main code here, to run repeatedly: 
voutMQ2 = analogRead(MQ2);
MQ2Value = (voutMQ2/1023)*2.67;
  Serial.print(MQ2Value);
  Serial.print(" ; ");

voutMQ3 = analogRead(MQ3);
MQ3Value = (voutMQ3/1023)*4.12;
  Serial.print(MQ3Value);
  Serial.print(" ; ");

voutMQ4 = analogRead(MQ4);
MQ4Value = (voutMQ4/1023)*4.13;
  Serial.print(MQ4Value);
  Serial.print(" ; ");

voutMQ5 = analogRead(MQ5);
MQ5Value = (voutMQ5/1023)*4.13;
  Serial.print(MQ5Value);
  Serial.print(" ; ");

voutMQ6 = analogRead(MQ6);
MQ6Value = (voutMQ6/1023)*4.14;
  Serial.print(MQ6Value);
  Serial.print(" ; ");

voutMQ7 = analogRead(MQ7);
MQ7Value = (voutMQ7/1023)*4.02;
  Serial.print(MQ7Value);
  Serial.print(" ; ");

voutMQ8 = analogRead(MQ8);
MQ8Value = (voutMQ8/1023)*3.96;
  Serial.print(MQ8Value);
  Serial.print(" ; ");

voutMQ9 = analogRead(MQ9);
MQ9Value = (voutMQ9/1023)*4.04;
  Serial.print(MQ9Value);
  Serial.print(" ; ");

voutMQ135 = analogRead(MQ135);
MQ135Value = (voutMQ135/1023)*4.02;
  Serial.print(MQ135Value);
  Serial.print(" ; ");

hum = dht.readHumidity();
temp= dht.readTemperature();
    Serial.print(hum);
    Serial.print(" %");
    Serial.print(" ; ");
    Serial.print(temp);
    Serial.println(" Celsius");
delay(5000);
}
