all: pacman_game

pacman_game: main.o gameengine.o pacman.o ghost.o board.o painter.o point.o
	g++ -o pacman_game main.o gameengine.o pacman.o ghost.o board.o painter.o point.o

main.o:
	g++ main.cpp -o main.o -c

gameengine.o:
	g++ gameengine.cpp -o gameengine.o -c

pacman.o:
	g++ pacman.cpp -o pacman.o -c

ghost.o:
	g++ ghost.cpp -o ghost.o -c

board.o:
	g++ board.cpp -o board.o -c

painter.o:
	g++ painter.cpp -o painter.o -c

point.o:
	g++ point.cpp -o point.o -c

clean:
	rm -f *.o pacman_game
