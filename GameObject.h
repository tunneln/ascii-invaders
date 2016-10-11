// Abstract GameObject
#ifndef	__GameObject_H_INCLUDED__
#define	__GameObject_H_INCLUDED__


class GameObject{
	public:
	//	static void(*enq)(); // enqueue obj in main
	//	static void(*deq)(); // dequeue obj in main
	//	static void addObject(GameObject&);
	//	static void removeObject(GameObject&);
		virtual void timeStep(int) = 0; // update position
		virtual char getShape() const = 0;
		virtual void setShape(char) = 0;

		// Checks if x and y of either object collide
		bool isCollision(const GameObject&) const;
		void setX(const int);
		void setY(const int);
		int getX() const;
		int getY() const;
		void decY();
		void decX();
		void incY();
		void incX();

	protected:
		int x;
		int y;
};

#endif
