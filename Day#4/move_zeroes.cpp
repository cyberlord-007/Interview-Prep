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
        ll n, i, j, c = 0;
        cin >> n;
        ll arr[n], temp[n] = {-1};
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (i = 0; i < n; i++)
        {
            if (arr[i] != 0)
                arr[c++] = arr[i];
        }
        while (c < n)
        {
            arr[c++] = 0;
        }
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}