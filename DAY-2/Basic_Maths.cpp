#include <bits\stdc++.h>
using namespace std;

// Given the number 'n'. find out and return number of digits present in a number.
void CountDigits()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    cout << "Number of digits : " << count << endl;

    // Time Complexity -> O(log10(n))
}

// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
// Note -> If A number has trailing Zeros.then its reverse will not include them. for e.g, reverse of 10400 will be 401 instead of 00401.
void ReverseNumber()
{
    int N;
    cout << "Enter the Number : ";
    cin >> N;
    int rev = 0;
    while (N > 0)
    {
        rev *= 10;
        rev += N % 10;
        N /= 10;
    }
    cout << "Reverse of Number is " << rev;
}

// Write a program to determine if given number is palindrome or not. Print true if it is palindrome, false otherwise.
void PalindromeNumber()
{
    int N;
    cout << "Enter the Number : ";
    cin >> N;
    int check = N;
    int rev = 0;
    while (N > 0)
    {
        rev *= 10;
        rev += N % 10;
        N /= 10;
    }
    if (check == rev)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}

// Check if the Number is Armstrong Number or not.
void ArmstrongNumber()
{
    int N;
    cout << "Enter the Number : ";
    cin >> N;
    int check = N;
    int rev = 0;
    while (N > 0)
    {
        int ls = N % 10;
        rev += ls * ls * ls;
        N /= 10;
    }
    if (rev == check)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

// Print All the Number that divides 'n' completely.
void PrintAllDivisors()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

// Check the Number is Prime or not
void CheckPrime()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

// Find Greatest common division or Highest common factor
void HCF()
{
    int n;
    cout << "Enter the number 1 : ";
    cin >> n;
    int m;
    cout << "Enter the number 2 : ";
    cin >> m;
    int hcf;
    for (int i = 1; i < min(n, m); i++)
    {
        if (n % i == 0 and m % i == 0)
        {
            hcf = i;
        }
    }
    cout << hcf;
}

// Euclidean Algorithm
// hcf(a,b) == hcf(a-b,b)   if a>b
void EuclideanAlgorithm()
{
    int a, b;
    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;
    while (a > 0 and b > 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    if (a == 0)
    {
        cout << b;
    }
    else
    {
        cout << a;
    }
}
int main()
{
    EuclideanAlgorithm();
    return 0;
}