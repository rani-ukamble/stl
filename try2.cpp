#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int sq = sqrt(n);

    bool isPrime = true;
    for(int i=2; i<=sq;i++){
        if(n%i==0){
         isPrime = false;
        }
    }
    if(isPrime) cout<<"Prime" <<endl;
    else cout<<"Not Prime"<<endl;
return 0;
}