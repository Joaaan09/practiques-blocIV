int led1 = 12;
int led2 = 13;

char valor;

void setup()  {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop()   {

  if (Serial.available())
  {
    valor = Serial.read();

    if (valor == 'A')
    {
      digitalWrite(led1, HIGH);
    }
    if (valor == 'B')
    {
      digitalWrite(led1, LOW);
    }
    if (valor == 'C')
    {
       digitalWrite(led2, HIGH);
    }
    if (valor == 'D')
    {
      digitalWrite(led2, LOW);
    }
  }
}
