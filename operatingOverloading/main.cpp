#include <iostream>
using namespace std;

#include "ticket.h"

int main()
{
    ticket one(1, 13.56);
    ticket two(2, 14.73);

    ticket three = one+two;

    three.printCrap();

    return 0;
}
