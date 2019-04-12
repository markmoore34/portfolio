
riddleGame: main.o player.o prizes.o spaces.o house.o school.o gym.o restaurant.o bennigans.o osu.o den.o golds.o
	g++ -std=c++0x main.o player.o prizes.o spaces.o house.o school.o gym.o restaurant.o bennigans.o osu.o den.o golds.o -o riddleGame

main.o: main.cpp
	g++ -std=c++0x -c main.cpp

player.o: player.cpp player.hpp
	g++ -std=c++0x -c player.cpp

prizes.o: prizes.cpp prizes.hpp
	g++ -std=c++0x -c prizes.cpp

spaces.o: spaces.cpp spaces.hpp
	g++ -std=c++0x -c spaces.cpp

house.o: house.cpp house.hpp
	g++ -std=c++0x -c house.cpp

school.o: school.cpp school.hpp
	g++ -std=c++0x -c school.cpp

gym.o: gym.cpp gym.hpp
	g++ -std=c++0x -c gym.cpp

restaurant.o: restaurant.cpp restaurant.hpp
	g++ -std=c++0x -c restaurant.cpp

bennigans.o: bennigans.cpp bennigans.hpp
	g++ -std=c++0x -c bennigans.cpp

osu.o: osu.cpp osu.hpp
	g++ -std=c++0x -c osu.cpp

den.o: den.cpp den.hpp
	g++ -std=c++0x -c den.cpp

golds.o: golds.cpp golds.hpp
	g++ -std=c++0x -c golds.cpp

clean:
	rm *.o riddleGame

