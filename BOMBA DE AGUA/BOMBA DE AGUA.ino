/*
FUNDACION KINAL
CENTRO EDUCATIVO TECNICO LABORAL KINAL
PEROTO EN ELECTRONICA
QUINTO PERITO
SECCION: A
CURSO: TALLER DE ELECTRONICA DIGITAL Y REPARACION DE COMPUTADORAS
ALUMNOS: ANGELLO GABRIEL MANSILLA DIEGUEZ y PABLO DAVID HERNANDEZ AJIATAZ
CARNETS: 2022380 y 2022472
PRACTICA 3 GPIO
*/

#define RELE 5
#define TRANSISTOR 2
#define LED 6
#define LED2 11

void setup()
{
  pinMode (RELE, OUTPUT);
  pinMode (TRANSISTOR, INPUT);
  pinMode (LED, OUTPUT);
  pinMode (LED2, OUTPUT);
 
}

void loop()
{
 if((digitalRead(TRANSISTOR))==LOW)
 {
  delay(100);
  digitalWrite(LED2, LOW);
  digitalWrite(LED, HIGH);
  digitalWrite(RELE, LOW);


 }
else {
  delay(100);
  digitalWrite(LED, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(RELE, HIGH);


 }
}
