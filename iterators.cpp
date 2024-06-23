#include <bits/stdc++.h>
using namespace std;

int main()
{
        //     vector<int>v = {1,2,3,4};
        //     for(int i=0;i<v.size();i++){
        //         cout<<v[i]<<" ";
        //     }
        // cout<<endl;

        // vector<int>::iterator it = v.begin();
        // for(it=v.begin();it!=v.end();it++){
        //     cout<<(*it+1)<<" ";
        // }
//**************************************************** */
        vector<pair<int, int>> v = {{1, 2}, {2, 3}};
        // vector<pair<int, int>>::iterator it;

        for(auto &it: v) {
         cout << it.first << " " << it.second << endl;

        }

        // for (it = v.begin(); it != v.end(); it++)
        // {
        //         // cout<<(*it).first<<" "<<(*it).second;
        //         cout << (it->first) << " " << (*it).second << endl;
        // }
        // cout<<endl;
        // for (pair<int, int>&it: v)
        // {
        //         // cout<<(*it).first<<" "<<(*it).second;
        //         cout << it.first << " " << it.second << endl;
        // }
//********************************************************************************* */
       
        // Range based loops

        // vector<int> v = {1, 2, 3, 4};
        // for (int val: v)
        // {
        //         cout << val<< " ";
        // }


        // cout << endl;
        //  for (int val: v)
        // {
        //         cout << val++<< " ";  //Pass by value ...copy
        // }
        //  cout << endl;
        //  for (int &val: v)
        // {
        //         cout << ++val<< " ";  //Pass by reference ...
        // }
//********************************************************************************************************* */
//     auto a = 1; //automatically determine the datatype of var
//     cout<<a<<endl;   


//Range based loops
//     for (auto val: v)
//         {
//                 cout << val<< " ";
//         }
        cout << endl;

        return 0;
}