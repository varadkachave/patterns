/*
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1 
5 4 3 2 1
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
            cout << num - j + 1 << " ";
            j = j + 1;

        }
        i = i + 1;
        cout << endl;
    }

}