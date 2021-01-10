#define BLYNK_PRINT Serial          
#include "ESP8266WiFi.h"                              //Including WiFi Library
#include "BlynkSimpleEsp8266.h"                       //Including Blynk WiFi Library
#include <Blynk.h>                                    //Including Blynk Library       
int analogPin = A0;                                   //
int val1 = 0;                                         //
int val2 = 0;                                         //Defining variables
int val3 = 0;                                         //
WidgetLCD lcd(V1);                                    //
WidgetBridge bright1(V5);

char auth[] = "gQtOu8azO1TYHbcHxbFtlE1AdU0gFrxD";     //Blynk auth token
char ssid[] = "DESKTOP-N08O56T 8843";                 //Wifi SSID
char pass[] = "Abcdefgh";                             //WiFi Password

void setup()                                          //Setup code to run once
{
  Serial.begin(9600);                                 //Begin serial communication
  pinMode(A0 ,INPUT);                                 //Defining Pin Mode
  Blynk.begin(auth, ssid, pass);                      //Start Blynk Communication
}
 
void loop()                                           //Main Code to run Multiple times
{
  val1 = analogRead (analogPin);                      //Set Variable for Analog reading
  val2 = (V6);                                        //Data from Trans 1
  val3 = (V7);                                        //Data from Trans 2
  
  Blynk.run();                                        //Run Blynk
{
   Blynk.virtualWrite (V2, val1);                     //Write the variable val on Virtual Pin V2 for graph
   
    if (val1<1024,val2=1024,val3=1024)  
    {lcd.clear();   //If voltage is less
   {lcd.print(0,0,"Line fault at Panjim");                                                                                               //Print on LCD display on Blynk
   Blynk.notify("Line Fault Detected Near Panjim");                                                                                      //Send a Notification      
   Blynk.virtualWrite(V3,1);                                                                                                             //Write 1 on virtual pin V3
   Blynk.email("VighneshNS2008@Gmail.COM", "Electrical Line Fault Detected", "Line Fault Detected Near Panjim");                         //Send a mail
   Blynk.virtualWrite(V4, "https://maker.ifttt.com/trigger/1_down/with/key/mojcAjoDV9JCq5DakyDFQDY2lCvJzTOTJZC3q6LmHaj");}               //Run Webhook, Fire IFTTT trigger

    if (val2<1024,val1=1024,val3=1024)    
    {lcd.clear();   //If voltage is less
   {lcd.print(0,0,"Line fault at Vasco");                                                                                                //Print on LCD display on Blynk
   Blynk.notify("Line Fault Detected Near Vasco");                                                                                       //Send a Notification      
   Blynk.virtualWrite(V3,1);                                                                                                             //Write 1 on virtual pin V3
   Blynk.email("VighneshNS2008@Gmail.COM", "Electrical Line Fault Detected", "Line Fault Detected Near Vasco");                          //Send a mail
   Blynk.virtualWrite(V4, "https://maker.ifttt.com/trigger/1_down/with/key/mojcAjoDV9JCq5DakyDFQDY2lCvJzTOTJZC3q6LmHaj");}                //Run Webhook, Fire IFTTT trigger
    
    if (val1=1024,val2=1024,val3<1024)     
    lcd.clear();   //If voltage is less
   {lcd.print(0,0,"Line fault at Ponda");                                                                                                 //Print on LCD display on Blynk
   Blynk.notify("Line Fault Detected Near Ponda");                                                                                        //Send a Notification      
   Blynk.virtualWrite(V3,1);                                                                                                              //Write 1 on virtual pin V3
   Blynk.email("VighneshNS2008@Gmail.COM", "Electrical Line Fault Detected", "Line Fault Detected Near Ponda");                           //Send a mail
   Blynk.virtualWrite(V4, "https://maker.ifttt.com/trigger/1_down/with/key/mojcAjoDV9JCq5DakyDFQDY2lCvJzTOTJZC3q6LmHaj");}                //Run Webhook, Fire IFTTT trigger

      if (val3<1024,val1<1024,val2=1024)                                                                                                  //If voltage is less
      lcd.clear();                                                                                                                         //clear LCD
   {lcd.print(0,0,"Line fault at Ponda and Panjim");                                                                                       //Print on LCD display on Blynk
   Blynk.notify("Line Fault Detected Near Ponda and Panjim");                                                                              //Send a Notification      
   Blynk.virtualWrite(V3,1);                                                                                                               //Write 1 on virtual pin V3
   Blynk.email("VighneshNS2008@Gmail.COM", "Electrical Line Fault Detected", "Line Fault Detected Near Ponda and Panjim");                 //Send a mail
   Blynk.virtualWrite(V4, "https://maker.ifttt.com/trigger/1_down/with/key/mojcAjoDV9JCq5DakyDFQDY2lCvJzTOTJZC3q6LmHaj");}                 //Run Webhook, Fire IFTTT trigger

  if (val1<1024,val2<1024,val3=1024)                                                                                                                         
  lcd.clear();                                                                                                                             //Clear LCD
  Blynk.virtualWrite(V3,0);}                                                                                                               //Write 1 on virtual pin V3                                                                                                                       //If voltage is less
   {lcd.print(0,0,"Line fault at Panjim and Vasco");                                                                                       //Print on LCD display on Blynk
   Blynk.notify("Line Fault Detected Near Ponda and Vasco");                                                                              //Send a Notification      
   Blynk.virtualWrite(V3,1);                                                                                                              //Write 1 on virtual pin V3
   Blynk.email("VighneshNS2008@Gmail.COM", "Electrical Line Fault Detected", "Line Fault Detected Near Ponda and Vasco");                 //Send a mail
   Blynk.virtualWrite(V4, "https://maker.ifttt.com/trigger/1_down/with/key/mojcAjoDV9JCq5DakyDFQDY2lCvJzTOTJZC3q6LmHaj");}                  //Run Webhook, Fire IFTTT trigger

  if (val3<1024,val2<1024,val1=1024)                                                                                                                        
  lcd.clear();                                                                                                                            //Clear LCD
  Blynk.virtualWrite(V3,0);}                                                                                                               //Write 1 on virtual pin V3                                                                                                                     //If voltage is less
   {lcd.print(0,0,"Line fault at Ponda and Vasco");                                                                                       //Print on LCD display on Blynk
   Blynk.notify("Line Fault Detected Near Ponda and Vasco");                                                                              //Send a Notification      
   Blynk.virtualWrite(V3,1);                                                                                                              //Write 1 on virtual pin V3
   Blynk.email("VighneshNS2008@Gmail.COM", "Electrical Line Fault Detected", "Line Fault Detected Near Ponda and Vasco");                 //Send a mail
   Blynk.virtualWrite(V4, "https://maker.ifttt.com/trigger/1_down/with/key/mojcAjoDV9JCq5DakyDFQDY2lCvJzTOTJZC3q6LmHaj");}                 //Run Webhook, Fire IFTTT trigger

     if (val3<1024,val2<1024,val1<1024)                                                                                                                        
  lcd.clear();                                                                                                                          //Clear LCD
  Blynk.virtualWrite(V3,0);}                                                                                                            //Write 1 on virtual pin V3                                                                                                                     //If voltage is less
   {lcd.print(0,0,"Line fault at Ponda and Vasco");                                                                                       //Print on LCD display on Blynk
   Blynk.notify("Line Fault Detected Near Ponda and Vasco");                                                                              //Send a Notification      
   Blynk.virtualWrite(V3,1);                                                                                                            //Write 1 on virtual pin V3
   Blynk.email("VighneshNS2008@Gmail.COM", "Electrical Line Fault Detected", "Line Fault Detected Near Ponda and Vasco");                 //Send a mail
   Blynk.virtualWrite(V4, "https://maker.ifttt.com/trigger/1_down/with/key/mojcAjoDV9JCq5DakyDFQDY2lCvJzTOTJZC3q6LmHaj");}              //Run Webhook, Fire IFTTT trigger

  if (val3=1024,val2=1024,val3=1024)                                                                                                    //If voltage is equal
  {lcd.clear();                                                                                                                         //Clear LCD
  Blynk.virtualWrite(V3,0);}                                                                                                            //Write 1 on virtual pin V3
}
}
    
 
