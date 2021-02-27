#ifndef HEART_H
#define HEART_H
#include <iostream>
#include "heart.h"

using namespace std;

class Heart{

	int rate;
	

public:

	Heart();
	Heart(int);

	int getRate();
	void setRate(int);


	bool ok();

};

#endif
