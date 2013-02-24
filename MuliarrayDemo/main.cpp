#include <iostream>

using namespace std;

int main()
{

    int cody[2][3] = {{2,6,2},{9, 1, 4}};

    for (int row=0; row < 2; row++)
    {
        for (int column=0; column < 3; column++)
        {
                cout << cody[row][column] << " ";
        }
        cout << endl;
    }

}
