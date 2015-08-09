#include "core/engine.h"
#include "core/node.h"
#include "core/window.h"
#include "core/polygon.h"
#include "core/keyboard.h"
#include "core/group.h"


#include "player.h"



int main(int argc, char** argv) {
	startEngine();

	Window j = Window(500,500, "TITULO");

    Keyboard* k = new Keyboard();
    Polygon* p = new Polygon(4,0,  0,
					           0,  50,
					           50, 50,
					           50, 0 );
    p->setXY(10, 50);
    
    p->setColor(0, 255, 0);

	Player player;
	
	Group g;
	g.addChild(p);

	j.addChild(&player);
	j.addChild(k);
	j.addChild(&g);

	while(!j.isClosing() && !k->isPressed(GLFW_KEY_ESCAPE)) {
		if(k->isPressed(GLFW_KEY_W)) 
			player.move(0,1);
		
		if(k->isPressed(GLFW_KEY_S)) 
			player.move(0,-1);

		if(k->isPressed(GLFW_KEY_A)) 
			player.move(-1,0);
		
		if(k->isPressed(GLFW_KEY_D)) 
			player.move(1,0);

		j.update();
	}

	delete p;
	return 0;
}