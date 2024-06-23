#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int>m = {{'{', -1}, {'[', -2}, {'(', -3}, {'}', 1},  {']', 2}, {')', 3}};

string balanced_paranthesis(string s){
stack<char>st;
for(char bracket: s){
    if(m[bracket]<0){
        st.push(bracket);
    }
    else{
        if(st.empty()) 
        return "No";
        int top = st.top();
        st.pop();
        if(m[top] + m[bracket] != 0) return "No"; 
    }
}
if(st.empty()) return "Yes";
return "No";
}

int main()
{
    string str = "{[( ]}";
    cout<<balanced_paranthesis(str);
return 0;
}