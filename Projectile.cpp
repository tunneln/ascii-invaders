//Projectile.cpp
#include "Projectile.h"

Projectile::Projectile(int a, int b, char t){
	type = t;
	x = a;		
	y = b;	
}

Projectile::Projectile(int a, int b){
	type = '|';
	x = a;
	y = b;
} 
void Projectile::setShape(char t){
	type = t;
}

char Projectile::getShape() const{
	return type;
}

void Projectile::timeStep(int ticks){
	if(ticks>=0){
		if(type == '|') // good guy
		{
			y--;
		}
		else // bad guy
		{
			y++;
		}
	}
}
