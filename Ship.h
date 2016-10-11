//Ship.h
#ifndef	__Ship_H_INCLUDED__
#define	__Ship_H_INCLUDED__

#include "GameObject.h"

class Ship: public GameObject{

	public:
		Ship();//Default ship type
		Ship(char t): type(t){}
		Ship(int, int);
		Ship(int, int, char);
		virtual void setShape(char);
		virtual char getShape() const;
		virtual void timeStep(int);

	protected:
		char type;

};

#endif
