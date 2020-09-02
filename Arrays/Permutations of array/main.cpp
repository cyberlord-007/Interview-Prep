#include <bits/stdc++.h> 
using namespace std; 
typedef long long int ll;
#define w(t)  int t; cin>>t; while(t--)
#define dec(x,y)  fixed<<setprecision(y)<<x
#define M  1000000007


void print(ll a[],ll n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}


void permutations(ll a[],int size,ll n){
    if(size==1){
        print(a,n);
        return;
    }

    for(int i=0;i<size;i++){
        permutations(a,size-1,n);
        if(size%2==1)
            swap(a[0],a[size-1]);
        else
            swap(a[i],a[size-1]);
    }
}


int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
  
#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr); 
    freopen("output.txt", "w", stdout); 
#endif 
  
    w(t){
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        permutations(arr,n,n);
        cout<<endl;
    }



    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0; 
} 