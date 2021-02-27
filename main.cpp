#include <iostream>
#include "person.h"
#include "stomach.h"
#include "heart.h"


int main() {
	Heart heart(80);

    Person bountyGuy("Greef Karga", heart);
    std::cout << bountyGuy.getName() << " is " << (bountyGuy.isHealthy() ? "ok" : "not doing well") << std::endl;
    bountyGuy.punch();
    std::cout << bountyGuy.getName() << " is " << (bountyGuy.isHealthy() ? "ok" : "not doing well") << std::endl;
    std::cout << bountyGuy.getName() << " is " << (bountyGuy.isHeartOk() ? "ok" : "not doing well") << std::endl;

    return 0;
}
