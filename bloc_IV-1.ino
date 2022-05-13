void setup(){
  Serial.begin (9600);
 pinMode (13, OUTPUT);
}
void loop (){
 char dada=Serial.read ();
 if (dada=='l')
   if (digitalRead (13) ==HIGH)
   digitalWrite (13, LOW);
   else
   digitalWrite (13, HIGH);
delay (1000);
}
