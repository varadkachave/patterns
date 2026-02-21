/*
1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9
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
            val++;
            j = j + 1;

        }
        
        i = i + 1;
        cout << endl;
    }
}