#include <bits\stdc++.h>
using namespace std;

void Insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 and arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
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

    Insertion_sort(arr, n);
}