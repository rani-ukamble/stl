#include <bits/stdc++.h>
using namespace std;

//  set ...sorted order

// Que. To find max toffies...t, N, k...No. of test cases , No. of toffies, No. of operations...Each time eat all toffies in the bag and add half of it...
// 1
// 5 3
// 2 1 7 4 2


// Function to find the maximum number of toffees that can be eaten
int main() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        int total_cnt = 0; // To store the total number of toffees eaten
        
        int n, k; // Number of toffees and number of operations
        cin >> n >> k;
        
        multiset<long long> s; // Multiset to store the number of toffees
        
        // Insert all toffees into the multiset
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            s.insert(x);
        }
        
        // Perform k operations
        while (k--) {
            auto it = --s.end(); // Get the iterator to the largest element
            int cnt = *it; // Get the largest number of toffees
            total_cnt += cnt; // Add it to the total count
            s.erase(it); // Remove the largest element
            s.insert(cnt / 2); // Add half of it back to the multiset
        }
        
        cout << total_cnt << endl; // Output the total number of toffees eaten for this test case
    }
    
    return 0;
}
