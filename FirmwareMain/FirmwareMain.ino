#include <WiFiEspClient.h>
#include <WiFiEsp.h>
#include <WiFiEspUdp.h>
#include "SoftwareSerial.h"
#include <ThingsBoard.h>

#define WIFI_AP "pizza"
#define WIFI_PASSWORD "12345678"

#define TOKEN "maincomplete"
int X;
int Y;
float TIME = 0;
float FREQUENCY = 0;
float WATER = 0;
float TOTAL = 0;
float LS = 0;
const int input = A0;
int solenoidPin1 = 4;  
int solenoidPin1 = 5; 
int MPin1 = 6;
int MPin2 =7;
void setup() 
{
  
pinMode(input,INPUT);
digitalWrite(flowsensor, HIGH);
pinMode(solenoidPin1, OUTPUT); 
pinMode(solenoidPin2, OUTPUT);
pinMode(MPin1, OUTPUT); 
pinMode(MPin2, OUTPUT);
}
Serial.begin(9600);
}

void loop() {

while(Serial.available==0)
{
  char t=(char)Serial.read();
  inputstr=+t;
  if (t == '\n') {
      stringComplete = true;
  }
  if(inputstr.substring(0,6)="sender1") // String manupulation of the INPUT
  { 
    digitalWrite(solenoidPin1, HIGH);
    digitalWrite(MPin1,HIGH);    // Motor control
    digitalWrite(MPin2,LOW);
    a=inputstr.substring(7);
    int numsend1=atoi(a);
    int watercount= flow();
    if(watercount==1)  // Using Flow sensor function return to control the Solenoid Valve
    {
    digitalWrite(solenoidPin1, LOW);
    digitalWrite(MPin1,HIGH);
    digitalWrite(MPin2,LOW);
    }
  }
  else if(inputstr.substring(0,6)="sender2")
  {
     digitalWrite(solenoidPin2, HIGH);
     digitalWrite(MPin1,HIGH);    
     digitalWrite(MPin2,LOW);
    a=inputstr.substring(7);
    int numsend1=atoi(a);
    int watercount= flow();
    {
    if(watercount==1)
    digitalWrite(solenoidPin2, LOW);
    digitalWrite(MPin1,HIGH);
    digitalWrite(MPin2,LOW);
    }
  }
}
}
void InitWiFi()
{
  // initialize serial for ESP module
  soft.begin(9600);
  // initialize ESP module
  WiFi.init(&soft);
  // check for the presence of the shield
  if (WiFi.status() == WL_NO_SHIELD) {
    Serial.println("WiFi shield not present");
    // don't continue
    while (true);
  }

  Serial.println("Connecting to AP ...");
  // attempt to connect to WiFi network
  while ( status != WL_CONNECTED) {
    Serial.print("Attempting to connect to WPA SSID: ");
    Serial.println(WIFI_AP);
    // Connect to WPA/WPA2 network
    status = WiFi.begin(WIFI_AP, WIFI_PASSWORD);
    delay(500);
  }
  Serial.println("Connected to AP");
}

void reconnect() 
{
  // Loop until we're reconnected
  while (!tb.connected()) {
    Serial.print("Connecting to ThingsBoard node ...");
    // Attempt to connect (clientId, username, password)
    if ( tb.connect(thingsboardServer, TOKEN) ) {
      Serial.println( "[DONE]" );
    } else {
      Serial.print( "[FAILED]" );
      Serial.println( " : retrying in 5 seconds" );
      // Wait 5 seconds before retrying
      delay( 5000 );
    }
  }
}
int flow (int count)
{ 
X = pulseIn(input, HIGH);
Y = pulseIn(input, LOW);
TIME = X + Y;
FREQUENCY = 1000000/TIME;
WATER = FREQUENCY/7.5;
LS = WATER/60;

while(count<TOTAL) // The Reading is taken until the desired quantity is read by the flow sensor
{
if(FREQUENCY >= 0)
{
if(isinf(FREQUENCY))
{
Serial.clear();
Serial.print(“VOL. :0.00”);
Serial.print(“TOTAL:”);
Serial.print( TOTAL);
Serial.print(” L”);
}
else
{
TOTAL = TOTAL + LS;
Serial.println(FREQUENCY);
Serial.print(“VOL.: “);
Serial.print(WATER);
Serial.print(” L/M”);
Serial.print(“TOTAL:”);
Serial.print( TOTAL);
Serial.print(” L”);
}
}
delay(1000);
}
TOTAL=0;
return 1; // After the desired water limit is met the confirmation is returned
}
