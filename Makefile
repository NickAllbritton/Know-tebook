sources=main.cpp

build: $(sources)
	g++ $(sources) -o knowtebook `pkg-config --cflags --libs gtk4`