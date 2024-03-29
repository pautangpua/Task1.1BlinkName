//TASK1.1P MORSE CODE BLINK
int buttonApin = 2;

void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
}


void loop() 
{
  //SPEED IS SLOW TO AVOID BOUNCING
  digitalWrite(LED_BUILTIN, LOW);

  if (digitalRead(buttonApin) == LOW)
  {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250);   
  digitalWrite(LED_BUILTIN, LOW); 
  delay(500);  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);  
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);  
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250);  
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);  
                   
                   
  //A .-
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250);   
  digitalWrite(LED_BUILTIN, LOW); 
  delay(500);  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);  
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);  

  //U ..-
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250);   
  digitalWrite(LED_BUILTIN, LOW); 
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);  
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
