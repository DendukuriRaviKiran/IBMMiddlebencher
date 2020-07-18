#include <WiFiEspClient.h>
#include <WiFiEsp.h>
#include <WiFiEspUdp.h>
#include "SoftwareSerial.h"
#include <ThingsBoard.h>

#define WIFI_AP "pizza"
#define WIFI_PASSWORD "12345678"

#define TOKEN "maincomplete"
int solenoidPin1 = 4;  
int solenoidPin1 = 5; 
void setup() {
  // put your setup code here, to run once:
pinMode(solenoidPin1, OUTPUT); 
pinMode(solenoidPin2, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available==0)
{
  char t=(char)Serial.read();
  inputstr=+t;
  if (t == '\n') {
      stringComplete = true;
  }
  if(inputstr.substring(0,6)="sender1")
  {
    digitalWrite(solenoidPin1, HIGH);
    a=inputstr.substring(7);
    int numsend1=atoi(a);
    delay(a*1000);
    digitalWrite(solenoidPin1, LOW);
  }
  else if(inputstr.substring(0,6)="sender2")
  {
     digitalWrite(solenoidPin2, HIGH);
    a=inputstr.substring(7);
    int numsend1=atoi(a);
    delay(a*1000);
    digitalWrite(solenoidPin2, LOW);
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

void reconnect() {
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
