#include<bits/stdc++.h> 
using namespace std; 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(t)  int t; cin>>t; while(t--)
#define dec(x,y)  fixed<<setprecision(y)<<x
#define M  1000000007

vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        int sum;
        if(nums.size()<3)
            return res;
        int i=0,j,k;
        for(i=0;i<nums.size();i++){
            j=i+1;
            k=nums.size()-1;

            if(i>0 && nums[i]==nums[i-1]) continue;

            while(j<k){
                sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[k]==nums[k-1]) k--;
                    while(j<k && nums[j]==nums[j+1]) j++;
                    k--;
                    j++;
                }
                else if(sum<0)
                    j++;
                else
                    k--;
            }
        }
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
		vector<int>inp;
		ll n,a;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			inp.push_back(a);
		}
		vector<vector<int>>ans = threeSum(inp);
		for(int i=0;i<ans.size();i++){
			cout<<'[';
			for(int j=0;j<3;j++){
				cout<<ans[i][j]<<" ";
			}
			cout<<']'<<',';
		}
	}

	cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
	return 0; 
} 

