#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int number = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << number;
        }
        number += 1;
        cout << endl;
    }
    return 0;
}