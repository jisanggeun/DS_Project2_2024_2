#ifndef _AVLNODE_H_
#define _AVLNODE_H_

#include "FlightData.h"

class AVLNode
{
private:
	AVLNode*			pRight;
	AVLNode*			pLeft;
	FlightData*			pFlightData;
	int					mBF;

public:
	AVLNode(){
		pRight = NULL;
		pLeft = NULL;
		pFlightData = NULL;
		mBF = 0;
	};
	~AVLNode(){};

	void setRight(AVLNode* SN){pRight = SN;}
	void setLeft(AVLNode* SN){pLeft = SN;}
	void setFlightData(FlightData* pFlight){ pFlightData = pFlight;}
	void setBF(int a){mBF = a;}
	AVLNode*	getRight(){return pRight;}
	AVLNode*	getLeft(){return pLeft;}
	FlightData*	getFlightData(){return pFlightData;}
	int				getBF(){return mBF;}
};

#endif
