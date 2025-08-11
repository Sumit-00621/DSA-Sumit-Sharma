#include <bits\stdc++.h>
using namespace std;

// Recursion -> When a function calls itself until a specified condition is met.

// ->Recursion Tree
// ->Recursion
// ->Base Case

int cnt = 0;
void print()
{
    if (cnt == 3)
        return;
    cout << cnt << " ";
    cnt++;
    print();
}

int main()
{
    print();
    return 0;
}