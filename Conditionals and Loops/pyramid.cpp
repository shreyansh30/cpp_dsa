#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 5; i > 0; i--) // i = 5 4 3 2 1
    {
        for (int j = 1; j < 6; j++) // j = 1 2 3 4 5
        {
            if (i==j || i<j)
            {
                cout << "*";
            }
            
            cout << " ";
        }
        cout << "\n";
    }
    
}
