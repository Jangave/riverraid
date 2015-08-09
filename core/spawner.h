#ifndef _SPAWNER_H_
#define _SPAWNER_H_

class Spawner : public Node {
	int interval;
	int factor;
	Group* g;
	Spawnable* spawn;
public:
	Spawner(int interval);
	Spawner();

	void setInterval(int interval);
	void setFactor(int factor);
	void setDestination(Group* g);
	void update();
};

#endif