#ifndef _NODE_H_
#define _NODE_H_

#include "engine.h"

class Node
{
protected:
	Node* parent;
	vector<Node*> childs;
public:
	//Node();
	//~Node();
	
	void setParent(Node* parent);
	Node* getParent();
	void addChild(Node* child);
	void removeChild(Node* child);
	void removeSelf();
	vector<Node*>* getChilds();

	virtual void create()  {};
	virtual void update()  {};
	virtual void destroy() {};
	virtual void draw()    {};
};

#endif