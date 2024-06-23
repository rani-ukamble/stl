#include <bits/stdc++.h>
using namespace std;

bool checkSortedAndRotated(vector<int> &v)
{
  int n = v.size();
  int cnt = 0;
  for (int i = 1; i < n; i++)
  {
    if (v[i - 1] > v[i])
      cnt++;
  }
  if (v[n - 1] > v[0])
    cnt++;
  return cnt <= 1;
}

void rotateArray(vector<int> &v, int k)
{
  int n = v.size();
  vector<int> v1;
  for (int i = k + 1; i < n; i++)
  {
    v1.push_back(v[i]);
  }
  for (int i = 0; i <= k; i++)
  {
    v1.push_back(v[i]);
  }

  v = v1;
}

int maxConsecutiveOnes(vector<int> &v)
{
  int n = v.size();
  int maxi = 0, cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (v[i] == 0)
      cnt = 0;
    else if (v[i] == 1)
      cnt++;
    maxi = max(cnt, maxi);
  }
  return maxi;
}

int getSingleElement(vector<int> &v)
{
  map<int, int> mp;
  int n = v.size();
  for (int i = 0; i < n; i++)
  {
    mp[v[i]]++;
  }
  for (auto it : mp)
  {
    if (it.second == 1)
      return it.first;
  }
}

int longestSubarrayWithSumK(vector<int> &v, int k)
{
  int l=0, r=0;
  int n=v.size();
  int maxi=0, sum=v[0];
  while(r<n){
    while(l<=r && sum>k){
      sum-=v[l];
      l++;
    }
    if(sum==k){
      maxi=max(maxi, r-l+1);
    }
    r++;
    if(r<n) sum+=v[r];
  }
  return maxi;
}


vector<int>twoSum(vector<int>&v, int t){
  unordered_map<int,int>mp;
  vector<int>ans;
  int n = v.size();
  for(int i=0;i<n;i++){
    if(mp.find(t-v[i])!=mp.end()){
      ans.push_back(mp[t-v[i]]);
      ans.push_back(i);
    }
    mp[v[i]]=i;
  }
  return ans;
}


vector<int>sortV(vector<int>&v){
  int n = v.size();
  int l=0, r=n-1, mid=0;
  while(l<=r){
    if(v[mid]==0){
      swap(v[l], v[mid]); l++; mid++;
    }
    else if(v[mid==1]){ mid++;}
    else{
      swap(v[mid], v[r]); r--;
    }
  }
  
  return v;
}

int main()
{
  vector<int> v = {11, 1, 2, 3, 4, 5, 6, 7};
  int k = 15;
  // cout<<longestSubarrayWithSumK(v, k)<<endl;
  // // cout<<checkSortedAndRotated(v)<<endl;
  // rotateArray(v, k);

  //  vector<int>v1={1,1,0,1,1,1};
  // cout<<maxConsecutiveOnes(v1)<<endl;

  // for (auto it : ans)
  // {
  //   cout << it << " ";
  // }

  // cout<<getSingleElement(v1)<<endl;
// vector<int> ans = twoSum(v,k);

vector<int>v2={1, 0, 2, 0, 0, 1, 2, 1};
vector<int>ans=sortV(v2);

for(auto it: ans){
  cout<<it<<" ";
}



  return 0;
}