#include "group.h"

void Group::draw() {
	glPushMatrix();
		glTranslated(this->getX(), this->getY(), 0);
		vector<Node*>* c = this->getChilds();
		for(int i = 0; i < c->size(); i++) {
            (*c)[i]->draw();
        }
    glPopMatrix();

}