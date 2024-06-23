#include <bits/stdc++.h>
using namespace std;



//O(N*N)
vector<int>major(vector<int>&v){
    int n=v.size();
    bool f;
    vector<int>ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        f=true;
        if(v[i]>maxi){
            ans.push_back(v[i]);
        }
        maxi=max(maxi, v[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}


//Longest successive ele
int longEle(vector<int>&v, int n){
    int cnt, maxi=INT_MIN;
    for(int i=0;i<n-1;i++){
        
        if(v[i+1]>v[i]){
            cnt++;
            maxi=max(maxi, cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}


int main()
{
    vector<int>v={1,2,5,6,3,2};
    int n=v.size();
    vector<int>ans=major(v);

    //O(N*N)
    // for(int i=0;i<n;i++){
    //     bool f=true;
    //     for(int j=i+1;j<n;j++){
    //         if(v[j]>v[i]){
    //             f=false;break;
    //         }
    //     }
    //     if(f) ans.push_back(v[i]);
    // }

    // for(auto it: ans){
    //     cout<<it<<" ";
    // }

vector<int>v1={8,9,1,2,5,6,3,2};
    int l=v1.size();
int res=longEle(v1,l);
   cout<<res<<endl; 
return 0;
}