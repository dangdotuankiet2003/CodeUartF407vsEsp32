#include"HardwareSerial.h"
HardwareSerial SerialPort(2);
 void setup()
 {
   SerialPort.begin(115200,SERIAL_8N1,16,17);
   Serial.begin(9600);
 }
 void loop()
 {
   if(SerialPort.available())
   {
     String Buffer = SerialPort.readString();
     Serial.print(Buffer);
   }
 }