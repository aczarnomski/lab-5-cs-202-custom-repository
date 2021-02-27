#include "heart.h"

Heart::Heart(){
	setRate(80);
}

Heart::Heart(int newRate){

	rate = newRate;

};

int Heart::getRate(){

	return rate;

};

void Heart::setRate(int newRate){

	rate = newRate;

};

bool Heart::ok(){

	if(rate > 50){
		return true;
	};

};
