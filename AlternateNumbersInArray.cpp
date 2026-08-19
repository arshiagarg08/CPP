#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter valuye of n:";
    cin>>n;
    int a[n][n], k=1;
    cout<<"Enter an array:\n";
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Array enterred:\n";
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if ((i+j)%2==0)
            {
                cout<<a[i][j]<<" ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

// OUTPUT

// enter valuye of n:5
// Enter an array:
// 4 1 2 5 2
// 6 2 3 2 6
// 1 4 7 5 8
// 7 4 5 6 5
// 8 4 5 5 1
// Array enterred:
// 4 1 2 5 2
// 6 2 3 2 6
// 1 4 7 5 8
// 7 4 5 6 5
// 8 4 5 5 1

// 4 * 2 * 2
// * 2 * 2 *
// 1 * 7 * 8
// * 4 * 6 *
// 8 * 5 * 1