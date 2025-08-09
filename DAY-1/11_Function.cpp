#include <bits/stdc++.h>
using namespace std;

// Take two numbers and fint the maximum number

void maximum(int a, int b)
{
    if (a > b)
        cout << "max : " << a << endl;
    else
        cout << "max : " << b << endl;
}
int main()
{
    int a;
    cout << "Enter 1 Number : ";
    cin >> a;
    int b;
    cout << "Enter 2 Number : ";
    cin >> b;
    maximum(a, b);
}