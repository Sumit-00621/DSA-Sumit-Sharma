#include <bits\stdc++.h>
using namespace std;

void Bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int didswap = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didswap = 1;
            }
        }
        if (didswap == 0)
        {
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter Number of Elements : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i << " : ";
        cin >> arr[i];
    }

    Bubble_sort(arr, n);

    return 0;
}