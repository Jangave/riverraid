#include "node.h"

void Node::setParent(Node* parent) {
	this->parent = parent;
}

Node* Node::getParent() {
	return this->parent;
}

void Node::addChild(Node* child) {
	child->setParent(this);
	childs.push_back(child);
}

vector<Node*>* Node::getChilds() {
	return &childs;
}

void Node::removeChild(Node* child) {
	if(childs.begin() == childs.end()) {
		cerr << "Don't have childs!" << endl;
	}
	if(child->getParent() == this) {
		vector<Node*>::iterator it = find(childs.begin(), childs.end(), child);
		childs.erase(it);
	}
	else {
		cerr << "Not my child" << endl;
	}
	
}

void Node::removeSelf() {
	if(this->parent != NULL) parent->removeChild(this);
}
