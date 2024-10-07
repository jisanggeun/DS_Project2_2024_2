#ifndef _BPTREEINDEXNODE_H_
#define _BPTREEINDEXNODE_H_

#include "BpTreeNode.h"
class BpTreeIndexNode : public BpTreeNode{
private:
	map <string, BpTreeNode*> mapIndex;
	
public:
	BpTreeIndexNode(){}
	~BpTreeIndexNode() {}

	void insertIndexMap(string n, BpTreeNode* pN){
		mapIndex.insert(map<string, BpTreeNode*>::value_type(n, pN));
	}

	void deleteMap(string n){
		mapIndex.erase(n);
	}

	map <string, BpTreeNode*>* getIndexMap(){return &mapIndex;}
};
#endif