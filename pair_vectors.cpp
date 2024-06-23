#include <bits/stdc++.h>
using namespace std;

void printVec1(vector<pair<int, int>>& v)
{
    cout << "size: " << v.size() << endl;
    // v.size() .... O(1)
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " "<<v[i].second<<endl;
    }
    cout << endl;
}

void printVec(vector< int> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // pair<int,string>p;
    // // p = make_pair(2,"fhg");
    // p = {2, "gjj"};
    // cout<<p.first<<" "<<p.second<<endl;    //........2 gjj

    // pair<int,string>p1 = p; //............Copy pass keli
    // p1.first = 3;
    // cout<<p.first<<endl;

    // pair<int,string>&p1 = p; //............Reference pass kela
    // p1.first = 3;
    // cout<<p.first<<endl;    //p1 and p2 both will change

    // int a[] = {1,2,3};
    // int b[] = {4,5,6};

    // pair<int,int>p_arr[3];
    // p_arr[0] = {1,4};
    // p_arr[1] = {2,5};
    // p_arr[2] = {3,6};

    // swap(p_arr[0], p_arr[2]);

    // for(int i=0;i<3;i++){
    //     cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    // }

    //************************* Vectors ***********************************************

    // vector<int>v;
    // vector<int>v(5, 9);
    // int n; cin>>n;
    // while(n--){
    //     int x; cin>>x;
    //     v.push_back(x);  //....O(1)
    // }

    //  vector<int>v2=v;  //(n)...copy ...change in v2 vector doesn't change in v
    // vector<int>&v2=v;  //O(1)...copy ...change in v2 vector will change in v...reference...actual vector passed

    // v2.push_back(2);
    // v.push_back(7);

    // printVec(v);
 
    //************************* Vectors ***********************************************
    // vector<pair<int, int>> v = {{1, 2}, {2, 3}};
    // printVec1(v);



//************************* Vectors ***********************************************


//columns are dynamic....vector of arrays
// 3
// 3
// 1 2 3
// 2
// 1 2
// 4
// 1 2 3 4


int N; cin>>N;

vector<int>v[N];

for(int i=0;i<N;i++){
    int n; cin>>n;
    for(int j=0;j<n;j++){
        int x; cin>>x;
       v[i].push_back(x);
    }
}

for(int i=0;i<N;i++){
    printVec(v[i]);
}

//************************* Vectors ***********************************************




//row and columns both are dynamic
// 3
// 3
// 1 2 3
// 2
// 1 2
// 4
// 1 2 3 4


// int N; cin>>N;

// vector<vector<int>>v;

// for(int i=0;i<N;i++){
//     int n; cin>>n;
//     vector<int>temp;
//     for(int j=0;j<n;j++){
//         int x; cin>>x;
//         temp.push_back(x);
//     }
//     v.push_back(temp);
// }

// for(int i=0;i<v.size();i++){
//     printVec(v[i]);
// }

//************************* Vectors ***********************************************


int t; cin>>t;
vector<vector<int>>vec;
for(int i=0;i<t;i++){
    vector<int>v;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    vec.push_back(v);
}
for(int i=0;i<N;i++){
printVec(vec[i]);
}


    return 0;
} 