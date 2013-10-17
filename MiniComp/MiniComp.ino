/*
MiniComp baseline firmware
*/

/*
MiniComp G-M-B
*/

/*
Preliminary Firmware for MiniComp Badge

Functions

Boot Screen

Three Badge-amations

Bade on Boot

*/

// Includes

#include "PCD8544.h"


// Defs
int mval;

// pin 7 - Serial clock out (SCLK)
// pin 6 - Serial data out (DIN)
// pin 5 - Data/Command select (D/C)
// pin 4 - LCD chip select (CS)
// pin 3 - LCD reset (RST)
PCD8544 nokia = PCD8544(7, 6, 5, 4, 3);



//Setup


void setup(void) {  
  intlcdm();
}


void loop() {
  mainm();
}


//Functions

//Boot Screen
void intlcdm(){
  nokia.println("MiniComp");
  nokia.println("V0.1B");
  nokia.println("Josephs Badge");
  nokia.display();        // show the changes to the buffer
  delay(5000);
}
  
//Main Menu
void mainm(){
  //
  char* lnone = "PRGM ONE";
  char* lntwo = "PRGM TWO";
  char* lnthree = "PRGM THREE";
}

