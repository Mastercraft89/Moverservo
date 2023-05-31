#include<Servo.h>

int ledRojo=5;
int ledverde=4;
Servo motor;
char userInput;
int i;

void setup() 
{
  Serial.begin(9600);
  pinMode(ledRojo, OUTPUT);
  pinMode(ledverde, OUTPUT);
  motor.attach(3);
  motor.write(0);
}

void loop() 
{  
if (Serial.available()>0)
  {
    userInput = Serial.read();//USamos condicionales para indicar qué acción tomar dependiendo del dato que llegue al arduino.
    if (userInput == 'o')
    {
      digitalWrite(ledverde, HIGH); //ESta instrucción activa (ON) la variable ledverde que es el pin 5
      AbrirPuerta();
      delay(4000);
      CerrarPuerta();
      digitalWrite(ledRojo, LOW);
    }
    
    if (userInput == 'x')
    {
      digitalWrite(ledRojo, HIGH); //Esta instrucción activa (ON) la variabe ledrojo que es el pin 4
      delay(1000);
      digitalWrite(ledRojo, LOW);
      digitalWrite(ledverde, LOW);
    }
  
    if (userInput == 'y')
    {
      digitalWrite(ledRojo, HIGH); //Esta instrucción activa (ON) la variabe ledrojo que es el pin 4
      delay(500);
      digitalWrite(ledRojo, LOW); 
      delay(500);
      digitalWrite(ledRojo, HIGH); //Esta instrucción activa (ON) la variabe ledrojo que es el pin 4
      delay(500);
      digitalWrite(ledRojo, LOW); 
      delay(500);
      digitalWrite(ledRojo, HIGH);
      delay(500);
      digitalWrite(ledRojo, LOW); 
      delay(500);
      digitalWrite(ledRojo, HIGH);
      delay(500);
      digitalWrite(ledRojo, LOW); 
      delay(500);
    }
  }
}

void AbrirPuerta()
{
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  motor.write(10);
  delay(500);
  motor.write(20);
  delay(500);
  motor.write(30);
  delay(500);
   motor.write(40);
  delay(500);
    motor.write(50);
  delay(500);
  motor.write(60);
  delay(500);
  motor.write(70);
  delay(500);
  motor.write(80);
  delay(500);
  motor.write(90);
  delay(500);
  motor.write(100);
  delay(500);
    motor.write(110);
  delay(500);
    motor.write(120);
  delay(500);
  motor.write(130);
  delay(500);
  motor.write(140);
  delay(500);

  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  delay(5000);
}
void CerrarPuerta()
{
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
    motor.write(140);
  delay(500);
  motor.write(130);
  delay(500);
  motor.write(120);
  delay(500);
  motor.write(110);
  delay(500);
  motor.write(100);
  delay(500);
  motor.write(90);
  delay(500);
  motor.write(80);
  delay(500);
  motor.write(70);
  delay(500);
  motor.write(60);
  delay(500);
  motor.write(50);
  delay(500);
  motor.write(40);
  delay(500);
  motor.write(30);
  delay(500);
  motor.write(20);
  delay(500);
  motor.write(10);
  delay(500);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
}
