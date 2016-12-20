CC = g++
CFLAGS = -Wall -g -O0
LIBS = -lncurses
SOURCES = main.cpp GameObject.cpp Ship.cpp EnemyShip.cpp BigBaddie.cpp SmallBaddie.cpp PlayerShip.cpp Projectile.cpp Block.cpp
HEADERS = GameObject.h Ship.h EnemyShip.h BigBaddie.h SmallBaddie.h PlayerShip.h Projectile.h Block.h
OBJECTS = $(SOURCES: .cpp = .o)
EXECUTABLE = Ascii_Invaders


all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	@$(CC) $(CFLAGS) $(SOURCES) -o $@ $(LIBS)

run: $(EXECUTABLE)
	./$(EXECUTABLE)

clean:
	rm -rf *.o $(EXECUTABLE)
