/*
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int i = 1;
    int print;

    while(i <= num)
    {
        int j = 1;
        while(j <= num)
        {
            cout << j << " ";
            j = j + 1;

        }
        i = i + 1;
        cout << endl;
    }

}