#include <iostream>
using namespace std;
int main()
{
    int i, j,k, n;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n-i; j++)
        {
            cout <<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<i;
        }
        cout << endl;
    }
    /*                      1 2 3 4
                        1         1
                        2       2 2
                        3     3 3 3
                        4   4 4 4 4
    */
}