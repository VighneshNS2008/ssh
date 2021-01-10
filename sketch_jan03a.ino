#define BLYNK_PRINT Serial          
#include "ESP8266WiFi.h"                              //Including WiFi Library
#include "BlynkSimpleEsp8266.h"                       //Including Blynk WiFi Library
#include <Blynk.h>                                    //Including Blynk Library       
int analogPin = A0;                                   //
int val = 0;                                          //Defining variables
WidgetLCD lcd(V1);       
WidgetBridge bridge1(V5);                             //

char auth[] = "1UynPHsa-UmIqYdR9UXPFi9ffKZO_qBc";     //Blynk auth token
char ssid[] = "DESKTOP-N08O56T 8843";                 //Wifi SSID
char pass[] = "Abcdefgh";                             //WiFi Password

BLYNK_CONNECTED()
{bridge1.setAuthToken("gQtOu8azO1TYHbcHxbFtlE1AdU0gFrxD");}

void setup()                                          //Setup code to run once
{
  Serial.begin(9600);                                 //Begin serial communication
  pinMode(A0 ,INPUT);                                 //Defining Pin Mode
  Blynk.begin(auth, ssid, pass);                      //Start Blynk Communication
}
 
void loop()                                           //Main Code to run Multiple times
{
  val = analogRead(analogPin);                        //Set Variable for Analog reading
  Blynk.run();                                        //Run Blynk
{
   Blynk.virtualWrite (V2, val);                      //Write the variable val on Virtual Pin V2
   bridge1.virtualWrite(V6, val);
    if (val<1024)                                                                                                                       //If voltage is less
   {lcd.print(0,0,"Line fault at Housing Board");                                                                                       //Print on LCD display on Blynk
   Blynk.notify("Line Fault Detected Near Housing Board");                                                                              //Send a Notification      
   Blynk.virtualWrite(V3,1);                                                                                                            //Write 1 on virtual pin V3
   Blynk.email("VighneshNS2008@Gmail.COM", "Electrical Line Fault Detected", "Line Fault Detected Near Housing Board");                 //Send a mail
   Blynk.virtualWrite(V4, "https://maker.ifttt.com/trigger/1_down/with/key/mojcAjoDV9JCq5DakyDFQDY2lCvJzTOTJZC3q6LmHaj");}              //Run Webhook, Fire IFTTT trigger

  if (val=1024)                                                                                                                         //If voltage is equal
  {lcd.clear();                                                                                                                         //Clear LCD
  Blynk.virtualWrite(V3,0);}                                                                                                            //Write 1 on virtual pin V3
}
}
 
