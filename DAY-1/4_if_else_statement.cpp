#include <bits/stdc++.h>
using namespace std;

/*
A school has following rules for grade system:
a. below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter the marks and print the corresponding grade
*/
int main()
{
    int marks;
    cout << "Enter the marks : ";
    cin >> marks;

    if (marks < 25)
    {
        cout << "F";
    }
    else if (marks < 45)
    {
        cout << "E";
    }
    else if (marks < 50)
    {
        cout << "D";
    }
    else if (marks < 80)
    {
        cout << "B";
    }
    else
    {
        cout << "A";
    }

    return 0;
}