#include <bits/stdc++.h>
using namespace std;

// Find the difference between  max and the min area of rectangle which are parallel to x and y axis.....given x, y co ordinates

// Approach.. first find diagonal and then find that 4 points are exist for rectangle or not
//   (x2,y2)       (x2,y2)
//         .       .
//               .
//              .
//             .
//           .        .
//    (x1,y1)          (x2,y1)

// I/P
// 6
// 10 0
// 0 10
// 10 2
// 0 0
// 0 2
// 10 10


int main()
{
    int n;
    cin >> n;
    set<pair<int, int>> st;
    vector<pair<int, int>> points(n);

    for (int i = 0; i < n; i++)
    {
        cin >> points[i].first >> points[i].second;
        st.insert(points[i]);
    }

    int mini = INT_MAX, maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            auto p1 = points[i];
            auto p2 = points[j];
            if (p1.first == p2.first)
                continue;
            if (p1.second == p2.second)
                continue;
            if (p1.first > p2.first)
                swap(p1, p2);

            int x1 = p1.first, y1 = p2.second;
            int x2 = p2.first, y2 = p1.second;

            if (st.count({x1, y1}) && st.count({x2, y2}))
            {
                int ar = abs(p1.first - p2.first) * abs(p1.second - p2.second);
                maxi = max(maxi, ar);
                mini = min(mini, ar);
            }
        }
    }
    cout << maxi - mini << endl;
    return 0;
}