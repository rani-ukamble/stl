#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {3, 2, 6, 9,1, 1, 6,6,6};

    int mini = *min_element(v.begin(), v.end());
    cout<<mini<<endl;
    int maxi = *max_element(v.begin(), v.end());
    cout<<maxi<<endl;
    int cnt = count(v.begin(), v.end(), 6);
    cout<<cnt<<endl;
    int x = *find(v.begin(), v.end(), 2);
    cout<<x<<endl;
    reverse(v.begin(), v.end());
    for(auto it: v)
{
    cout<<it<<" ";
}

cout<<endl;

string s = "njknkl";
reverse(s.begin(), s.end());
cout<<s<<endl;

int sum = accumulate(v.begin(), v.end(),0);
cout<<sum<<endl;
return 0;
}