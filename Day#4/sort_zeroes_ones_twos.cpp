#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define dec(x, y) fixed << setprecision(y) << x
#define M 1000000007

int main()
{
    w(t)
    {
        ll n, i;
        cin >> n;
        ll lo = 0, hi = n - 1, m = 0;
        ll arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (m <= hi)
        {
            if (arr[m] == 0)
            {
                swap(arr[lo], arr[m]);
                lo++;
                m++;
            }
            else if (arr[m] == 1)
            {
                m++;
            }
            else if (arr[m] == 2)
            {
                swap(arr[m], arr[hi]);
                hi--;
            }
        }
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}