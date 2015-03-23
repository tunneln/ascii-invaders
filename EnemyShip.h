//EnemyShip.h
#ifndef	__EnemyShip_H_INCLUDED__
#define	__EnemyShip_H_INCLUDED__

#include "Ship.h"

class EnemyShip: public Ship{

	public:
		EnemyShip();
		EnemyShip(int, int);
		EnemyShip(int, int, char);
		EnemyShip(int, int, char, char);
		virtual void timeStep(int);
		void setRate(int);
		double getRate();			
		char getGun();
		void setGun(char);

	protected:
		double rate;
		char gun;
};

#endif
