#include<bits/stdc++.h> 
using namespace std; 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(t)  int t; cin>>t; while(t--)
#define dec(x,y)  fixed<<setprecision(y)<<x
#define M  1000000007

double exponent(ll x,ll n){
	ll a = n;
	if(n<0)
		a = -1*a;
	double res = 1.0;
	while(a){
		if(a%2==1)
			res*=x;
		x=x*x;
		a=a/2;
	}
	if(n<0)
		res = double(1.0)/double(res);
	return res;
}


int main() 
{
	ios_base::sync_with_stdio(false);cin.tie(NULL); 

	#ifndef ONLINE_JUDGE 
		freopen("input.txt", "r", stdin); 
		freopen("error.txt", "w", stderr); 
		freopen("output.txt", "w", stdout); 
	#endif 


	w(t){
		ll n,x;
		cin>>x>>n;
		double res = exponent(x,n);
		cout<<res<<endl;
	}


	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 

