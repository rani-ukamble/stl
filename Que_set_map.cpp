#include <bits/stdc++.h>
using namespace std;

// Function to print the students' names with their marks in decreasing order

// 4
// raj 78
// aliya 45
// vishal 45
// ravi 90

int main() {
    map<int, multiset<string>> marks;
    int t; 
    cin >> t;
    
    while (t--) {
        string name;
        int m;
        cin >> name >> m;
        marks[m].insert(name);
    }

    // Iterate through the map in reverse order to get marks in descending order
    for (auto it = marks.rbegin(); it != marks.rend(); ++it) {
        const auto &students = it->second;
        int mark = it->first;
        
        for (const auto &i : students) {
            cout << i << " " << mark << endl;
        }
    }

    return 0;
}
