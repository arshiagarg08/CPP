#include <iostream>
using namespace std;

int main()
{
    int a[3][1], b[3][1], c[3][1];
    cout<<"enter 1st array:\n";
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<1; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"array entered:\n";
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"enter 2nd array:\n";
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<1; j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"array entered:\n";
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<1; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"sum:\n";
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<1; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<1; j++)
        {
            cout<<c[i][j]<<" ";
        }
    }
    return 0;
}