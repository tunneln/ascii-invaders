//SmallBaddie.cpp
#include "SmallBaddie.h"

SmallBaddie::SmallBaddie(){
	rate = .25;
	gun = '*';
	type = 'M';
}

SmallBaddie::SmallBaddie(int a, int b){
	x = a;
	y = b;
	rate = .25;
	type = 'M';
	gun = '*';
}

