#include <bits/stdc++.h>
using namespace std;

// Comparator function for sorting pairs
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) {
        return a.first > b.first; // Decreasing order by the first element
    }
    return a.second < b.second; // Increasing order by the second element if first elements are the same
}

int main() {
    vector<int> v = {3, 2, 5, 6, 4};
    vector<pair<int, int>> p = {{1, 2}, {2, 3}, {4, 3}, {5, 6}, {2,7}};
    int n = v.size();

    // Sort the vector of integers using the built-in sort function
    sort(v.begin(), v.end());

    // Sort the vector of pairs using the custom comparator
    sort(p.begin(), p.end(), cmp);

    // Print the sorted vector of integers
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    // Print the sorted vector of pairs
    for (auto it : p) {
        cout << "(" << it.first << ", " << it.second << ") ";
    }
    cout << endl;

    return 0;
}
