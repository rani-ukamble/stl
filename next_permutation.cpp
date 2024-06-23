#include <bits/stdc++.h>
using namespace std;

vector<int>nextPermutation(vector<int>&v){
    int ind=-1;
    int n=v.size();
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            ind=i; break;
        }
    }
    if(ind==-1){
        reverse(v.begin(), v.end());
        return v;
    }
    for(int i=n-1;i>=ind+1;i--){
        if(v[i]>v[i+1]){
            swap(v[i],v[ind]); break;
        }
    }
    reverse(v.begin()+ind+1, v.end());
    return v;
}


//2

void rec_permutation(int ind, vector<int>& v, vector<vector<int>>& ans) {
    int n = v.size();
    if (ind == n) {
        ans.push_back(v);
        return;
    }

    for (int i = ind; i < n; i++) {
        swap(v[i], v[ind]);
        rec_permutation(ind + 1, v, ans);
        swap(v[i], v[ind]);
    }
}

vector<vector<int>> permut(vector<int>& v) {
    vector<vector<int>> ans;
    rec_permutation(0, v, ans);
    return ans;
}

int main() {
    vector<int> v = {1,2,3};
    int n=v.size();
    
    vector<vector<int>> ans = permut(v);
    // for (const auto& perm : ans) {
    //     for (int num : perm) {
    //         cout << num << " ";
    //     }
    //     cout << endl; 
    // }

for(int i=0;i<n;i++)
cout<<ans[1][i]<<" ";
    return 0;
}
