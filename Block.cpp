#include "Block.h"

Block::Block(){
	type = '#';
	x = 0;
	y = 0;
}	

Block::Block(int a, int b){
	type = '#';
	x = a;
	y = b;
}

void Block::setShape(char t){
	type = t;
}

char Block::getShape() const{
	return type;
}

void Block::timeStep(int ticks){
	if(type == '#')
		type = '='; 
	if(type == '=')
		type = '-'; 
	if(type == '-')
		type = 0;
}

