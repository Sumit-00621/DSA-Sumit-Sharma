#include <bits\stdc++.h>
using namespace std;

// Print Name N times using recursion.
void PrintName(int N, string s)
{
    if (N == 0)
        return;
    cout << s << " ";
    PrintName(N - 1, s);
}

// Print Number 1 to N using recursion.
void Print1toN(int i, int N)
{
    if (i > N)
        return;
    cout << i << " ";
    Print1toN(i + 1, N);
}

// Print Number N to 1 using recursion.
void PrintNto1(int i, int N)
{
    if (N < i)
        return;
    cout << N << " ";
    PrintNto1(i, N - 1);
}

// Print Number 1 to N by backtracking
void BackTrack1(int i, int N)
{
    if (N < i)
        return;
    BackTrack1(i, N - 1);
    cout << N << " ";
}

// Print Number N to 1 by backtracking
void BackTrack2(int i, int N)
{
    if (i > N)
        return;
    BackTrack2(i + 1, N);
    cout << i << " ";
}

// Sum of First N Numbers by recursion
int SumOfN(int N, int sum)
{
    if (N < 1)
    {
        return sum;
    }
    return SumOfN(N - 1, sum + N);
}

// Find the Factorial of N using recursion
int Factorial(int N)
{
    if (N == 0)
    {
        return 1;
    }
    return N * Factorial(N - 1);
}

// Reverse an Array using Recursion.
void Reverse(vector<int> &v, int l, int r)
{
    if (l >= r)
        return;
    swap(v[l], v[r]);
    Reverse(v, l + 1, r - 1);
}

// Check if a string is palindrome or not by using recursion.
bool CheckPalindrome(string s, int l, int r)
{
    if (s[l] != s[r])
    {
        return false;
    }
    if (l > r)
    {
        return true;
    }
    return CheckPalindrome(s, l + 1, r - 1);
}

// Fibonacci Number by recursion
int FibonacciNumber(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return FibonacciNumber(n - 1) + FibonacciNumber(n - 2);
}
int main()
{
    cout << FibonacciNumber(6);
}