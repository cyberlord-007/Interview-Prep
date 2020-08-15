// insertion sort
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define dec(x, y) fixed << setprecision(y) << x
#define M 1000000007

int partition(int *arr, int s, int e)
{
    int pIndex = s;
    int pivot = arr[e];
    for (int i = s; i < e; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[pIndex], arr[e]);
    return pIndex;
}

void quickSort(int *arr, int s, int e)
{
    if (s <= e)
    {
        int pIndex;
        pIndex = partition(arr, s, e);
        quickSort(arr, s, pIndex - 1);
        quickSort(arr, pIndex + 1, e);
    }
}

int main()
{
    int n, i, j;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}