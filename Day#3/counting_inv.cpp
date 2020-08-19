#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define dec(x, y) fixed << setprecision(y) << x
#define M 1000000007

int merge_n_count(ll *arr, ll s, ll m, ll e)
{
    ll n1 = m - s + 1;
    ll inv_count = 0;
    ll n2 = e - m;
    ll i = 0, j = 0, k = s;
    ll left[n1], right[n2];
    for (i = 0; i < n1; i++)
    {
        left[i] = arr[s + i];
    }
    for (j = 0; j < n2; j++)
    {
        right[j] = arr[m + s + j];
    }
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
            inv_count += (n1 - i + 1);
        }
    }
    while (i < n1)
    {
        arr[k++] = left[i++];
    }
    while (j < n2)
    {
        arr[k++] = right[j++];
    }
    return inv_count;
}

int mergeSort(ll *arr, ll s, ll e)
{
    ll inv_count = 0;
    if (s < e)
    {
        ll m = (s + e) / 2;
        inv_count += mergeSort(arr, s, m);
        inv_count += mergeSort(arr, m + 1, e);
        inv_count += merge_n_count(arr, s, m, e);
    }
    return inv_count;
}

int main()
{
    ll n, i;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll res = mergeSort(arr, 0, n - 1);
    cout << res << endl;
    return 0;
}