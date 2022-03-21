void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(2, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(3, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(4, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(5, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  
  digitalWrite(1, LOW);
  digitalWrite(2, LOW); 
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  
}
