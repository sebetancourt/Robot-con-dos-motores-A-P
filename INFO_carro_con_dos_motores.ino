int motor1 = 5;
int izqA = 6; 
int izqR = 7;
int motor2 = 8; 
int derA = 9; 
int derR = 10; 
int velocidad = 100;
int mssg = 0;
void setup()  { 
  pinMode(motor1, OUTPUT);
  pinMode(derA, OUTPUT);
  pinMode(derR, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(izqA, OUTPUT);
  pinMode(izqR, OUTPUT);
  Serial.begin(9600);
 } 
void loop()  {   
if (Serial.available() > 0)
   {
      mssg = Serial.read(); 
  
      if(mssg == 'w')
      {
        adelante(); 
      }    
      if(mssg == 's')
      {
        atras(); 
      }   
      if(mssg == 'a')
      {
        izquierda(); 
      }   
      if(mssg == 'd')
      {
        derecha(); 
      } 
      if(mssg == 'q')
      {
        velocidad+=15; 
      }   
      if(mssg == 'e')
      {
        velocidad-=15; 
      }                     
   }
}

void adelante()
{
    digitalWrite (derA, HIGH);  
    digitalWrite (izqA, HIGH);
    digitalWrite (derR, LOW);
    digitalWrite (izqR, LOW);
    analogWrite (motor1, velocidad);
    analogWrite (motor2, velocidad);
}
void atras()
{
    digitalWrite (derA, LOW);  
    digitalWrite (izqA, LOW);
    digitalWrite (derR, HIGH);
    digitalWrite (izqR, HIGH); 
    analogWrite (motor1, velocidad);
    analogWrite (motor2, velocidad);
}
void izquierda()
{
    digitalWrite (derA, HIGH);  
    digitalWrite (izqA, LOW);
    digitalWrite (derR, LOW);
    digitalWrite (izqR, HIGH);
    analogWrite (motor1, velocidad);
    analogWrite (motor2, velocidad);
}
void derecha()
{
    digitalWrite (derA, LOW);  
    digitalWrite (izqA, HIGH);
    digitalWrite (derR, HIGH);
    digitalWrite (izqR, LOW);
    analogWrite (motor1, velocidad);
    analogWrite (motor2, velocidad);
}
void detener()
{
    digitalWrite (derA, LOW);  
    digitalWrite (izqA, LOW);
    digitalWrite (derR, LOW);
    digitalWrite (izqR, LOW);
    analogWrite (motor1, velocidad);
    analogWrite (motor2, velocidad);
}
