#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    /*                      1 2 3 4
                        1   1
                        2   1 2
                        3   1 2 3
                        4   1 2 3 4
    */
}