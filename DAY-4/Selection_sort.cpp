#include <bits\stdc++.h>
using namespace std;

void Selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                swap(arr[min], arr[j]);
            }
        }
    }
    cout << "Sorted Array : ";
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

    Selection_sort(arr, n);

    return 0;
}