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

void merge(int *arr, int s, int e)
{
    int mid = (s + 1) / 2;
    int i = s, j = mid + 1, k = s;

    int b[1000];
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            b[k++] = arr[i++];
        }
        else
        {
            b[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        b[k++] = arr[i++];
    }
    while (j <= e)
    {
        b[k++] = arr[j++];
    }
    for (i = s; i <= e; i++)
    {
        arr[i] = b[i];
    }
}

void mergeSort(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    if (s >= e)
        return;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int n, i, j, s, e;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergeSort(a, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}