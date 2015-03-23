//SmallBaddie.cpp
#include "SmallBaddie.h"

SmallBaddie::SmallBaddie(){
	rate = .25;
	gun = '*';
}

SmallBaddie::SmallBaddie(int a, int b){
	x = a;
	y = b;
	rate = .25;
	type = 'u';
	gun = '*';
}

