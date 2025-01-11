build: main.cpp
	g++ main.cpp -o knowtebook `pkg-config --cflags --libs gtk4`