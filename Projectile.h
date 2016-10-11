//Projectile.h
#ifndef	__Projectile_H_INCLUDED__
#define	__Projectile_H_INCLUDED__

#include "GameObject.h"

class Projectile: public GameObject{

	public:
		Projectile(): type('|'){}
		Projectile(char z): type(z){}
		Projectile(int, int);
		Projectile(int, int, char);
		virtual void setShape(char);
		virtual char getShape() const;
		virtual void timeStep(int);

	private:
		char type;
};

#endif
