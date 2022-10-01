#pragma once
#include "helper.h"
void RobotLine::radionica() {
// ZADATAK: Prikaži naziv robota.
// HINT: display(); 
display("SVEN");

// ZADATAK: Neka robot opiše četverokut. 
go(60,60);
delayMs(3000);
go(50,-50);
delayMs(1000);
}
