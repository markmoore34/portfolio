
fantasyFinal: main.o vampire.o character.o game.o barbarian.o bluemen.o medusa.o harrypotter.o
	g++ -std=c++0x main.o vampire.o character.o game.o barbarian.o bluemen.o medusa.o harrypotter.o -o fantasyFinal

main.o: main.cpp
	g++ -std=c++0x -c main.cpp

vampire.o: vampire.cpp vampire.hpp
	g++ -std=c++0x -c vampire.cpp

game.o: game.cpp game.hpp
	g++ -std=c++0x -c game.cpp

barbarian.o: barbarian.cpp barbarian.hpp
	g++ -std=c++0x -c barbarian.cpp

bluemen.o: bluemen.cpp bluemen.hpp
	g++ -std=c++0x -c bluemen.cpp

character.o: character.cpp character.hpp
	g++ -std=c++0x -c character.cpp

medusa.o: medusa.cpp medusa.hpp
	g++ -std=c++0x -c medusa.cpp

harrypotter.o: harrypotter.cpp harrypotter.hpp
	g++ -std=c++0x -c harrypotter.cpp

clean:
	rm *.o fantasyFinal

