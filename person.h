#include <iostream>
#include "stomach.h"
#include "heart.h"

class Person {
    std::string name;
public:
    Person(const std::string &name, Heart& heart) : name(name), heart(heart) {
        std::cout << "person constructor" << std::endl;
    }

    virtual ~Person() {
        std::cout << "person destructor" << std::endl;
    }

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        Person::name = name;
    }

private:
    Stomach stomach;
	Heart& heart;

public:
    bool isHealthy(){
        return stomach.statusCheck();
    }

    void punch() {
        stomach.gotHit();
    }

	bool isHeartOk(){

		if(heart.ok()){
			return true;
		};

	};
};



