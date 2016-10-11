//Block.cpp
#ifndef	__Block_H_INCLUDED__
#define	__Block_H_INCLUDED__
#include "GameObject.h"

class Block: public GameObject
{
	public:
		Block();
		Block(char t): type(t){}
		Block(int, int);
		virtual void setShape(char);
		virtual char getShape() const;
		virtual void timeStep(int);

	protected:
		char type;
};

#endif
