#include<bits/stdc++.h> 
using namespace std; 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(t)  int t; cin>>t; while(t--)
#define dec(x,y)  fixed<<setprecision(y)<<x
#define M  1000000007

int main() 
{ 
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin); 
		freopen("error.txt", "w", stderr); 
		freopen("output.txt", "w", stdout); 
	#endif 

	w(t){
		ll n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		ll cand=-1;
		ll c=0;
		for(int i=0;i<n;i++){
			if(cand==arr[i])
				c++;
			else if(c==0){
				cand=arr[i];
				c++;
			}
			else
				c--;
		}
		cout<<cand<<endl;
	}


	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 

