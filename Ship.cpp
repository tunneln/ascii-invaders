//Ship.cpp
#include "Ship.h"

Ship::Ship(){
	type = '#';
	x = 0;
	y = 0;
} //Default ship type

Ship::Ship(int a, int b){
	x = a;
	y = b;
}

Ship::Ship(int a, int b, char t){ 
	x = a;	
	y = b;			
	type = t;
}

void Ship::setShape(char t){
	type = t;
}

char Ship::getShape() const{
	return type;	
}

void Ship::timeStep(int ticks){
// UNDEFINED BEHAVIOR
} 
