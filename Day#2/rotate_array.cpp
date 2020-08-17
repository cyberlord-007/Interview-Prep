#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
template <typename T, size_t size>
void print(const T (&array)[size])
{
    for (size_t i = 0; i < size; ++i)
        std::cout << array[i] << " ";
}
#define dec(x, y) fixed << setprecision(y) << x
#define M 1000000007

void reverse(ll a[], ll s, ll e)
{
    ll temp;
    while (s < e)
    {
        temp = a[s];
        a[s] = a[e];
        a[e] = temp;
        s++;
        e--;
    }
}
void rotate(ll a[], ll d, ll n)
{
    if (d == 0)
        return;
    reverse(a, 0, d - 1);
    reverse(a, d, n - 1);
    reverse(a, 0, n - 1);
}

int main()
{

    w(t)
    {
        ll n, d, i;
        cin >> n ;
        ll arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin>>d;
        rotate(arr, d, n);
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}