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
		ll n,target;
		cin>>n>>target;

		ll nums[n];
		for(int i=0;i<n;i++)
			cin>>nums[i];
		std::vector<int> v;
		ll i=0;
		ll j=n-1;
		while(i<j && nums[i]+nums[j]!=target){
			if(nums[i]+nums[j]>target)
				j--;
			else if(nums[i]+nums[j]<target)
				i++;
		}
		v.push_back(i+1);
		v.push_back(j+1);
		for(int i=0;i<v.size();i++)
			cout<<v[i]<<" ";
	}


	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 

