
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define dec(x, y) fixed << setprecision(y) << x
#define M 1000000007

void heapify(ll arr[], ll n, ll i)
{
    ll max = i;
    ll left = 2 * i + 1;
    ll right = 2 * i + 2;
    if (left < n && arr[left] > arr[max])
        max = left;
    if (right < n && arr[right] > arr[max])
        max = right;

    if (max != i)
    {
        swap(arr[i], arr[max]);
        heapify(arr, n, max);
    }
}

void heapsort(ll arr[], ll n)
{
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    w(t)
    {
        ll n, i, j;
        cin >> n;
        ll arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        heapsort(arr, n);
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}