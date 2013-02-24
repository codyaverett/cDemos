#ifndef TICKET_H
#define TICKET_H


class ticket
{
    public:
        ticket(int num, double value);
        int number;
        double price;

        ticket operator+(ticket);
        void printCrap();
};

#endif // TICKET_H
