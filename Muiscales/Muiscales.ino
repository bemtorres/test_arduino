const int pinBuzzer = 9;
 
const int tonos[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494};
const int countTonos = 12;



void setup()
{ 
}
 
void loop()
{
  tone (pinBuzzer, 262);
  /*
   for (int iTono = 0; iTono < countTonos; iTono++)
   {
   tone(pinBuzzer, tonos[iTono]);
   delay(500);
   }
   noTone(pinBuzzer);
   delay (5000); */
}
