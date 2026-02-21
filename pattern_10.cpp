/*
1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int i = 1;
    while (i <= num)
    {
        int j = 1;
        int val = i;
        while (j <= i)
        {

           //  cout << (i + j - 1) << " ";
           // j++;
            cout << val << " ";
            val--;
            j = j + 1;

        }
        
        i = i + 1;
        cout << endl;
    }
}