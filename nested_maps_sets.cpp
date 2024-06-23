#include <bits/stdc++.h>
using namespace std;

int main()
{
//     map<pair<int,int>, int>m;
//     pair<int, int>p1, p2;
//     p1 = {3,9};
//     p2 = {3, 4};
//     cout<<(p1>p2);

map<pair<string, string>, vector<int>>m;
int t; cin>>t;
while (t--)
{

string fn, ln;
int n; cin>>fn>>ln>>n;
for(int i=0;i<n;i++){
    int x; cin>>x;

    m[{fn,ln}].push_back(x);

}


for(auto &pr : m){
    auto &full_name = pr.first;
    auto &list = pr.second;

    cout<<full_name.first<<" "<<full_name.second<<" "<<list.size()<<endl;
    for(auto &it: list){
        cout<<it<<" "; 
        
    }
    cout<<endl;
}
}

return 0;
}