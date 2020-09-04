#include<bits/stdc++.h> 
using namespace std; 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(t)  int t; cin>>t; while(t--)
#define dec(x,y)  fixed<<setprecision(y)<<x
#define M  1000000007


vector<int> majority(ll *nums,ll n){
		ll cand1=-1,c1=0;
		ll cand2=-1,c2=0;
		vector<int> v;
		for(int i=0;i<n;i++){
            if(nums[i]==cand1)
                c1++;
            else if(nums[i]==cand2)
                c2++;
            else if(c1==0){
                cand1=nums[i];
                c1++;
            }
            else if(c2==0){
                cand2=nums[i];
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=c2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==cand1) c1++;
            if(nums[i]==cand2) c2++;
        }
        if(c1>(n/3))
            v.push_back(cand1);
        if(c2>(n/3))
            v.push_back(cand2);
        return v;
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
		ll n;
		cin>>n;
		ll nums[n];
		for(int i=0;i<n;i++)
			cin>>nums[i];
		std::vector<int> res = majority(nums,n);
		for(auto i=res.begin();i!=res.end();i++)
		cout<<*i<<" ";		
	}


	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 

