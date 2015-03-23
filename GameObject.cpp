#include "GameObject.h"


bool GameObject::isCollision(const GameObject& foo) const{
	return ( (foo.getX() == x) && (y == foo.getY()) );
}

void GameObject::setX(const int a){
	x = a;
}

void GameObject::setY(const int b){
	y = b;
}

int GameObject::getX() const{
	return x;
}

int GameObject::getY() const{
	return y;
}

void GameObject::incY(){
	y++;
}

void GameObject::incX(){
	x++;
}

void GameObject::decY(){
	y--;
}

void GameObject::decX(){
	x--;
}
