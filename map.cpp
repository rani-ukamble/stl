#include <bits/stdc++.h>
using namespace std;

// map uses trees and unordered_map uses hash tables for implementation
// map - can use any datatypes but unordered_map cant't use complex datatypes like pairs..
//multimpa- can uses duplicates also...

void print(map<int, string>&mp)
{
    cout << "size: " <<mp.size() << endl;
     for(auto it: mp){
    cout<<it.first<<" "<<it.second<<endl;
   }
   //n values access and print....O(nlogn)
    cout << endl;
}


int main()
{
   map<int, string>mp;  //sorted order---map
   mp[9]="bhb";
   mp[2]="uhj";
   mp[7]="ytwu";             //O(logn)
    mp[7]="jhkmlmlll";             //O(logn)

//    print(mp);

//    auto it = mp.find(2);
//    if(it==mp.end()) cout<<"not found "<<endl;
//    else cout<<(*it).first<<" "<<(*it).second<<endl;

// mp.erase(7);
// mp.clear();
//    print(mp);

//   mp[6]; //O(logn)

//mp["abjbjn rknlk"]="dgubjn"; //...size of string["abjbjn rknlk"]* O(logn)



 //Que. N strings print in lexicographical order with their frequency
 map<string, int>m;
 int n; cin>>n;
 for(int i=0;i<n;i++){
    string s; cin>>s;
    m[s]++;
 }  

for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;

}


return 0;
}