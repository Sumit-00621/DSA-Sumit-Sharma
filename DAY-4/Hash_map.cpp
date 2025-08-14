#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of Elements : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] += 1;
    }

    int q;
    cout << "Enter Number of Queries : ";
    cin >> q;
    while (q--)
    {
        int number;
        cout << "Enter Number : ";
        cin >> number;
        cout << "count : " << mpp[number] << endl;
    }
    return 0;
}