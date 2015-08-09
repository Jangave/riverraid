COMPILER=g++
FLAGS=-lglfw3 -lGL -lm -lXrandr -lXi -lX11 -lXxf86vm -lpthread
FILES=node.cpp color.cpp shape.cpp group.cpp keyboard.cpp point.cpp polygon.cpp window.cpp player.cpp riverraid.cpp
OUTPUT=riverraid

build:
	$(COMPILER) $(FILES) $(FLAGS) -o $(OUTPUT)
	@echo "OK"
run:
	@./$(OUTPUT)
clean:
	rm *.o
	rm $(OUTPUT)