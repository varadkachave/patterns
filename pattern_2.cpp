/*
1 1 1 1 1 
2 2 2 2 2 
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    int num = 1;
    cin >> n;

    int i = 0;
    while(i < n)
    {
        int j = 0;
        while(j < n)
        {
            cout << num << " ";
            j = j + 1;
        }
        num = num + 1;
        i =  i + 1;

        cout <<endl;
    }
}