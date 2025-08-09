#include <bits\stdc++.h>
using namespace std;

//      * * * *
//      * * * *
//      * * * *
//      * * * *
void Pattern1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

//      *
//      * *
//      * * *
//      * * * *
//      * * * * *
void Pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

//      1
//      1 2
//      1 2 3
//      1 2 3 4
//      1 2 3 4 5
void Pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

//      1
//      2 2
//      3 3 3
//      4 4 4 4
//      5 5 5 5 5
void Pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

//      * * * * *
//      * * * *
//      * * *
//      * *
//      *
void Pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

//      1 2 3 4 5
//      1 2 3 4
//      1 2 3
//      1 2
//      1
void Pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
void Pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " " << " ";
        }
        cout << endl;
    }
}

// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
void Pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < (2 * n) - (2 * i + 1); j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " " << " ";
        }
        cout << endl;
    }
}

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
void Pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " " << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < (2 * n) - (2 * i + 1); j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " " << " ";
        }
        cout << endl;
    }
}

//      *
//      * *
//      * * *
//      * * * *
//      * * * * *
//      * * * *
//      * * *
//      * *
//      *
void Pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

//      1
//      0 1
//      1 0 1
//      0 1 0 1
//      1 0 1 0 1
void Pattern11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

//      1             1
//      1 2         2 1
//      1 2 3     3 2 1
//      1 2 3 4 4 3 2 1
void Pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= (2 * n) - (2 * i); j++)
        {
            cout << " " << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

//      1
//      2 3
//      4 5 6
//      7 8 9 10
//      11 12 13 14 15
void Pattern13(int n)
{
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}

//      A
//      A B
//      A B C
//      A B C D
//      A B C D E
void Pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(64 + j) << " ";
        }
        cout << endl;
    }
}

//      A B C D E
//      A B C D
//      A B C
//      A B
//      A
void Pattern15(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << char(64 + j) << " ";
        }
        cout << endl;
    }
}

//      A
//      B B
//      C C C
//      D D D D
//      E E E E E
void Pattern16(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(64 + i) << " ";
        }
        cout << endl;
    }
}

//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A
void Pattern17(int n)
{
    char a = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " " << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j < i)
            {
                cout << a << " ";
                a++;
            }
            else
            {
                cout << a << " ";
                a--;
            }
        }
        a = 'A';
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " " << " ";
        }
        cout << endl;
    }
}

//      E
//      D E
//      C D E
//      B C D E
//      A B C D E
void Pattern18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << char(64 + n + 1 - j) << " ";
        }
        cout << endl;
    }
}

//      * * * * * * * * * *
//      * * * *     * * * *
//      * * *         * * *
//      * *             * *
//      *                 *
//      *                 *
//      * *             * *
//      * * *         * * *
//      * * * *     * * * *
//      * * * * * * * * * *
void Pattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j < (2 * n - 2) - 2 * i; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

//      *                 *
//      * *             * *
//      * * *         * * *
//      * * * *     * * * *
//      * * * * * * * * * *
//      * * * *     * * * *
//      * * *         * * *
//      * *             * *
//      *                 *
void Pattern20(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j < (2 * n - 2) - 2 * i; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << "*" << " ";
        }
        for (int j = 0; j < (2 * i) + 2; j++)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < n - (i + 1); j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

//      * * * *
//      *     *
//      *     *
//      * * * *
void Pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1 || i == 0 || i == n - 1)
            {
                cout << "*" << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
}

//      4 4 4 4 4 4 4
//      4 3 3 3 3 3 4
//      4 3 2 2 2 3 4
//      4 3 2 1 2 3 4
//      4 3 2 2 2 3 4
//      4 3 3 3 3 3 4
//      4 4 4 4 4 4 4
void Pattern22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;
            cout << n - min(min(top, bottom), min(left, right)) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    Pattern22(n);
}