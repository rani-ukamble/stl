#include <bits/stdc++.h>
using namespace std;

//condition sorted array

// lower bound ... equal or greater element 
// lower bound ... greater element 


int main()
{
    // vector<int>v = {3, 4, 5, 8, 8, 9, 11};
    // auto p = lower_bound(v.begin(), v.end(), 8);
    // if(p==v.end()){
    //     cout<<"Not found ";
    //     return 0;
    // }

    // auto q = upper_bound(v.begin(), v.end(), 8);
    // if(q==v.end()){
    //     cout<<"Not found ";
    //     return 0;
    // }
    // cout<<*p<<" "<<*q<<endl;

    // #for maps and sets
    set<int>s;
    for(int i=0;i<(int)1e6;i++){
        s.insert(rand());
    }
     set<int>::iterator it; 
        for (int i = 0; i < (int)1e5; i++) {
        it = s.insert(rand()).first;
    }

    // Print the last inserted element
    cout << *it << endl;
return 0;
}