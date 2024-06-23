#include <bits/stdc++.h>
using namespace std;

vector<int>nextGreaterElement(vector<int>&num){
    int size = num.size();
    vector<int>ans(size);
    stack<int>st;
    for(int i=0;i<size;i++){
        while(!st.empty() && num[i]>num[st.top()]){
            ans[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        ans[st.top()] = -1;
        st.pop();
    }
    return ans;
}

int main()
{
    vector<int>v = {4, 5, 2, 25, 7, 8};
    vector<int>ans = nextGreaterElement(v);
    for(auto it : ans){
        if(it==-1) cout<<-1<<" ";
        else cout<<v[it]<<" ";
    }
return 0;
}