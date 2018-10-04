#include <iostream>
using namespace std;

void main()
{
    int f=1, n=1, i;
    cout << "Enter a natural number:\n";
    cin >> n;
    for ( i=n; i>0; i--)
    {
        f *= i;
    }
    cout << n <<"!\t=\t" << f;
}
