#include <bits/stdc++.h>
using namespace std;

// Lambda function...make a code short

int main()
{
    auto sum = [](int x, int y) {return x+y;};
    cout<<sum(3,4)<<endl;

    vector<int>v = {2,4, 5, -1};
    cout<<all_of(v.begin(), v.end(), [](int x){ return x>0;})<<endl;
    
    cout<<any_of(v.begin(), v.end(), [](int x){ return x>0;})<<endl;

    cout<<none_of(v.begin(), v.end(), [](int x){ return x>0;});

 
return 0;
}