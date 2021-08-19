#include <SoftwareSerial.h>
char received_data;
SoftwareSerial bluetoothserial(2, 3); // RX | TX
void setup()
{
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  bluetoothserial.begin(9600);
  Serial.println("The bluetooth gates are open.\n Connect to HC-05 from any other bluetooth device with 1234 as pairing key!.");
 
}
 
void loop()
{
 
  if (bluetoothserial.available())
    Serial.println(bluetoothserial.read());
    received_data=bluetoothserial.read();
    if (received_data == '1')
    {
      digitalWrite(11,HIGH);
    }
    if (received_data == '0')
    {
      digitalWrite(11,LOW);
    }
  if (Serial.available())
    bluetoothserial.write(Serial.read());
}
