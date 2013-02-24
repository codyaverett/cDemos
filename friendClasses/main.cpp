#include <iostream>

using namespace std;

class StankFist{

    public:
        StankFist(){stinkyVar=0;}
    private:
        int stinkyVar;

    friend void stinkysFriends(StankFist &sfo);

};

void stinkysFriends(StankFist &sfo){
    sfo.stinkyVar=99;
    cout << sfo.stinkyVar << endl;
}

int main()
{
    StankFist bob;
    stinkysFriends(bob);
}
