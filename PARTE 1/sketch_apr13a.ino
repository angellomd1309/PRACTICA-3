
/*
FUNDACION KINAL
CENTRO EDUCATIVO TECNICO LABORAL KINAL
PEROTO EN ELECTRONICA
QUINTO PERITO
SECCION: A
CURSO: TALLER DE ELECTRONICA DIGITAL Y REPARACION DE COMPUTADORAS
ALUMNOS: ANGELLO GABRIEL MANSILLA DIEUGEZ y PABLO DAVID HERNANDEZ AJIATAZ
CARNETS: 2022380 y 2022472
PRACTICA 3 GPIO
 */


 #define bt1 2 //Definimos los PUSH BUTTONS.
 #define bt2 3
 #define out1 4 //Definimos las salidas, en este caso, los anodos del led RGB.
 #define out2 5
 #define out3 6


void setup() {
  pinMode(bt1, INPUT); //Definimos las salidas y entradas con pinmode.
  pinMode(bt2, INPUT);
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  
}

void loop() {

if(((digitalRead(bt1))==LOW) && ((digitalRead(bt2))==LOW)) 
 {
  digitalWrite(out1, HIGH);
  delay(500);
  digitalWrite(out1, LOW);
  delay(100);
  digitalWrite(out2, HIGH);
  delay(500);
  digitalWrite(out2, LOW);
  delay(100);
  digitalWrite(out3, HIGH);
  delay(500);
  digitalWrite(out3, LOW);
  delay(100);
 }
if(((digitalRead(bt1))==HIGH) && ((digitalRead(bt2))==LOW)) 
{
  digitalWrite(out1, HIGH);
  digitalWrite(out2, HIGH);
  digitalWrite(out3, LOW);
}
if(((digitalRead(bt1))==LOW) && ((digitalRead(bt2))==HIGH)) 
{
  digitalWrite(out1, LOW);
  digitalWrite(out2, HIGH);
  digitalWrite(out3, HIGH);
}
if(((digitalRead(bt1))==HIGH) && ((digitalRead(bt2))==HIGH)) 
{
  digitalWrite(out1, HIGH);
  digitalWrite(out2, LOW);
  digitalWrite(out3, HIGH);
}







}
