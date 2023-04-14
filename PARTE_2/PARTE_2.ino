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


int LED; //Definimos la variable universal LED, esta nos ayudara para no hacer tantos #define.

void setup()
{
  for(int LED = 2; LED <= 11; LED++) //Declaramos una variable For universal, como estructura Inicializacion/Condicion/Incremento, adenas de establecer los pines del 2 al 11 como Salidas.
  {
    
    pinMode(LED,OUTPUT); //Definimos la variable LED como salida.
    
  }
}

void loop()
{
 for( LED = 2; LED <= 11; LED++) //Establecemos el inicio en el pin 2, condicionando que si es menor o igual a 11, la variable LED Aumentara su Valor.
  {
    digitalWrite(LED,HIGH);
    delay(50);
    digitalWrite(LED,LOW);
  }
  
  for( LED = 11; LED >= 2; LED--) //Establecemos su inicio en el pin 11, condicionando que si es mayor o igual a 2, la variable LED disminuira su valor.
  {
    digitalWrite(LED,HIGH);
    delay(50);
    digitalWrite(LED,LOW);
  }
  
}
