#include <MatrizLed.h>

/*
 * muestro en pantalla el Texto ISPC que aparece por la derecha y sale por la izquierda
 */
//creo variables y pines
int dataPin = 12;
int clkPin = 11;
int csPin = 10;
int cantidadMatrices = 1;
MatrizLed pantalla;//creo el obteto pantalla

void setup() {
  pantalla.begin(dataPin, clkPin, csPin,cantidadMatrices); // dataPin, clkPin, csPin, numero de matrices de 8x8
}

void loop() { 
  pantalla.borrar();//borra la pantalla
  pantalla.escribirFraseScroll("ISPC", 200); // Texto, milisegundos entre frames
}
