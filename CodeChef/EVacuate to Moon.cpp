#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, m, h, res = 0;
        cin >> n >> m >> h;
        vector<long long> car(n);
        vector<long long> p(m);
        for(auto &x : car) { cin >> x; }
        for(auto &x : p) { cin >> x; }

        sort(car.begin(), car.end(), greater<long long>());
        sort(p.begin(), p.end(), greater<long long>());

        long long s = min(n, m);
        for(long long i = 0; i < s; i++) {
            res += min(1LL*car[i], 1LL*p[i] * h);
        }
        cout << res << endl;
    }
}
