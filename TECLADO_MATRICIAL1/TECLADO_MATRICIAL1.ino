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

#include <Keypad.h> //Incluimos la libreria Keypad.h, perteneciente a Keypad Master.

//Macros o directivas de preprocesador
#define filas 4   //cantidad de filas que posee el teclado matricial.
#define columnas 4 //cantidad de columnas que posee el teclado matricial.
//Definimos los pines del teclado matricial.
#define f1 2  //pin2 conectado a la fila 1
#define f2 3  //pin3 conectado a la fila 2
#define f3 4  //pin4 conectado a la fila 3
#define f4 5  //pin5 conectado a la fila 4
#define c1 6  //pin6 conectado a la columna 1
#define c2 7  //pin7 conectado a la columna 2
#define c3 8  //pin8 conectado a la columna 3
#define c4 9  //pin9 conectado a la columna 4

//Definimos los pines del display de 7 segmentos en los pines analogicos del arduino.
 #define LA A0
 #define LB A1
 #define LC A2
 #define LD A3
 #define LE A4
 #define LF A5
 #define LG 11
 #define BT 12

//Creo una matriz led con la disposicion fisica de las teclas
char keys[filas][columnas] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

//Arreglos en los que defino los pines a utilizar, tanto para las columnas como para las filas
byte pines_filas[filas] = {f1,f2,f3,f4};
byte pines_columnas[columnas] = {c1,c2,c3,c4};

//Creo el constructor para poder usar el teclado matricial.
Keypad PA_KEYBOARD = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas,columnas);

void setup() {
  //Declaramos los pines analogicos para que sean salidas, hacia el display de 7SEG.
  
  pinMode(LA, OUTPUT);
  pinMode(LB, OUTPUT);
  pinMode(LC, OUTPUT);
  pinMode(LD, OUTPUT);
  pinMode(LE, OUTPUT);
  pinMode(LF, OUTPUT);
  pinMode(LG, OUTPUT);
  pinMode(BT, INPUT);


}

void loop() {

  char tecla = PA_KEYBOARD.getKey();  //Obtengo la tecla que presione
  switch(tecla)
  {
   
   break;
   case('0'):
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   ;
   break;
   case('1'):
   digitalWrite(LA, LOW);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, LOW);
   digitalWrite(LE, LOW);
   digitalWrite(LF, LOW);
   digitalWrite(LG, LOW);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   case('2'):
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, LOW);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, LOW);
   digitalWrite(LG, HIGH);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   case('3'):
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, LOW);
   digitalWrite(LF, LOW);
   digitalWrite(LG, HIGH);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);;
   break;
   case('A'):
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, LOW);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, HIGH);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   case('4'):
   digitalWrite(LA, LOW);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, LOW);
   digitalWrite(LE, LOW);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, HIGH);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   case('5'):
   digitalWrite(LA, HIGH);
   digitalWrite(LB, LOW);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, LOW);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, HIGH);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   case('6'):
   digitalWrite(LA, HIGH);
   digitalWrite(LB, LOW);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, HIGH);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   case('B'):
   digitalWrite(LA, LOW);
   digitalWrite(LB, LOW);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, HIGH);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   case('7'):
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, LOW);
   digitalWrite(LE, LOW);
   digitalWrite(LF, LOW);
   digitalWrite(LG, LOW);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   case('8'):
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, HIGH);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   case('9'):
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, LOW);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, HIGH);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   case('C'):
   digitalWrite(LA, HIGH);
   digitalWrite(LB, LOW);
   digitalWrite(LC, LOW);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   break;
   case('D'):
   digitalWrite(LA, LOW);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, LOW);
   digitalWrite(LG, HIGH);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   case('#'):
   digitalWrite(LA, HIGH);
   digitalWrite(LB, LOW);
   digitalWrite(LC, LOW);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, HIGH);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;
   case('*'):
   digitalWrite(LA, HIGH);
   digitalWrite(LB, LOW);
   digitalWrite(LC, LOW);
   digitalWrite(LD, LOW);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, HIGH);
   delay(750);
   digitalWrite(LA, HIGH);
   digitalWrite(LB, HIGH);
   digitalWrite(LC, HIGH);
   digitalWrite(LD, HIGH);
   digitalWrite(LE, HIGH);
   digitalWrite(LF, HIGH);
   digitalWrite(LG, LOW);
   break;

   

  }
  if((digitalRead(BT))==HIGH){
   digitalWrite(LA, LOW);
   digitalWrite(LB, LOW);
   digitalWrite(LC, LOW);
   digitalWrite(LD, LOW);
   digitalWrite(LE, LOW);
   digitalWrite(LF, LOW);
   digitalWrite(LG, HIGH);
  }
}
