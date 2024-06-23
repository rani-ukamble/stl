#include <bits/stdc++.h>
using namespace std;

// find max of (a[i]+x)%m

// (a[i]+x)%m === (a[i]%m + x%m)%m

int main()
{
    int n=5, m=5;
    long long x=7;
    long long a[5] ={3, 4, 6, 8, 9};

    for(int i=0;i<n;i++){
        a[i] %= m;
    }

    sort(a, a+n);

//     int r = x%m;

//     for(int i=0;i<n;i++){
//         a[i] += r;
//     }
//     sort(a, a+n);

// cout<<a[n-1]<<endl;


// OR 


x%=m;
long long *p = upper_bound(a, a+n, m-x-1);

if(p!=a){
    p--;
}
cout<<((a[n-1]+x)%m, (*p+x)%m) <<endl; 


return 0;
}