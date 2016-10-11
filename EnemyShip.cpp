//EnemyShip.cpp
#include "EnemyShip.h"

EnemyShip::EnemyShip(){
	rate = .1;
	gun = '!';
}

EnemyShip::EnemyShip(int a, int b){
	x = a;
	y = b;
	rate = .1;
	gun = '!';
}

EnemyShip::EnemyShip(int a, int b, char t){
	x = a;
	y = b;
	type = t;
}

void EnemyShip::timeStep(int ticks){
	if(ticks == 2){ // move down
		y++;
	}
	if(ticks == 1){ // move left
		x--;
	}
	if(ticks == 0){ // move right
		x++;
	}
}

void EnemyShip::setRate(int r){
	rate = r;
}

double EnemyShip::getRate(){
	return rate;
}

char EnemyShip::getGun(){
	return gun;
}

void EnemyShip::setGun(char g){
	gun = g;
}

