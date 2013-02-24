#include <iostream>
using namespace std;

#include "ticket.h"

ticket::ticket(int num, double val)
:number(num), price(val)
{}

ticket ticket::operator+(ticket old)
{
    ticket newTicket(0, 0);
    newTicket.number = number + old.number;
    newTicket.price = price + old.price;
    return newTicket;
}

void ticket::printCrap()
{
    cout << "Ticket # " << number << endl;
    cout << "Price = " << price << endl;
}
