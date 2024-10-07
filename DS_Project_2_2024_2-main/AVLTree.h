#ifndef _AVLTREE_H_
#define _AVLTREE_H_

#include "FlightData.h"
#include "AVLNode.h"
/* class AVL */

class AVLTree{
private:
	AVLNode*	root;

public:
	
	AVLTree(){
		root=NULL;
	}
	~AVLTree(){};
	bool		Insert(FlightData* pVac);
	FlightData*	Search(string name);
	void GetVector(vector<FlightData*>& v);
};

#endif

