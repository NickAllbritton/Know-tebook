sources=main.cpp

build: $(sources)
	g++ $(sources) -o knowtebook `pkg-config --cflags --libs gtkmm-4.0` -std=c++17