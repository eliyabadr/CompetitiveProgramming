#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    vector<int> v(n);
    for (auto &x : v) cin >> x;

    sort(v.begin(), v.end());

    double mx = 0.0;
    double left_radius = v[0] - 0.0;
    double right_radius = l - v[n-1];
    
    for (int i = 0; i < n - 1; ++i) {
        double gap = v[i + 1] - v[i];
        mx = max(mx, gap);
    }

    double res = max(mx / 2.0, max(left_radius, right_radius));
    cout << fixed << setprecision(10) << res << endl;

    return 0;
}

