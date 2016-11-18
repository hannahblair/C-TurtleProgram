#ifndef __NODE_H__
#define __NODE_H__

class Node {

protected:
	float v;

public:
	Node(){};
	virtual ~Node(){};
	virtual void Run()=0;

};

#endif
