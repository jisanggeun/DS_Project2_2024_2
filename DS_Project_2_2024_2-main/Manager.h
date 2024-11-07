#pragma once
#include "FlightData.h"
#include "AVLTree.h"
#include "BpTree.h"
#include <algorithm>

using namespace std;
class Manager{
private:
	AVLTree		*avl;	// AVL tree
	BpTree		*bp;		// B+ tree
	vector<FlightData*> Print_vector;

public:
	Manager(int bpOrder); //b+ node map size == bpOrder
	~Manager(); //memory free only on newly allocated avl and bp

	void	run(const char * command_txt);
	bool	LOAD();
	bool	VLOAD();
	bool	ADD();
	bool	PRINT_BP();
	bool	SEARCH_BP(string name);
	bool	SEARCH_BP(string start, string end);
	bool	SEARCH_AVL(string name);
	bool	VPRINT(string type_);
	void	printErrorCode(int n);
};

