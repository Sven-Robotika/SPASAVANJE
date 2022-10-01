#pragma once
#include "helper.h"
void RobotLine::radionica() {
if(setup()){
armOpen();
}
// Ovaj dio za sada zanemarite.
  uint8_t red[8];
  uint8_t green[8];
  for (uint8_t i = 0; i < 8; i++)
    red[i] = 0;
// ZADATAK: Izradite vlastiti simbol. 
// HINT: Upišite 1 za svako mjesto koje želite da svjetli.
// UPOZORENJE: Treba ostati isti broj znakova (0b i 8 znakova)
  green[0] = 0b11111111;
  green[1] = 0b10000001;
  green[2] = 0b10000001;
  green[3] = 0b10000001;
  green[4] = 0b10000001;
  green[5] = 0b10000001;
  green[6] = 0b10000001;
  green[7] = 0b11111111;
// Naredbom "store" pohranjujemo simbol pod broj 1
  store(red, green, 1);
// Naredbom "display" ispisujemo simbol sačuvan pod broj 1
  display(1);
  delayMs(200);
// ZADATAK: Uredite parametre da dobijete ispravno praćenje zida
 if (front() < 200){
   go(-90, 90);
   delayMs(400);
 }
 if (rightFront() > 130)
   go(80, 60);
 else
   go(60, 80);
}
