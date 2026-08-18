#include <iostream>
using namespace std;

int main()
{
    int i=0, j=1, k;
    while (i<=34)
    {
        cout << i << " ";
        k=i+j;
        i=j;
        j=k;
    }
   
    return 0;
}
