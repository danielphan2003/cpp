#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;

int main() {
    freopen("NKBUS.INP", "r", stdin);
    freopen("NKBUS.OUT", "w", stdout);

    cin >> n >> m;
    int sum = 0;

    vector<int> a;

    for (int i = 0; i < n; i++) {

        int t; cin >> t;
        int k; cin >> k;

        while (k--) {
            int x; cin >> x;
            a.push_back(x - sum);
        }

        sum += t;
    }

    sort(a.begin(), a.end());

    int wait_time = m > (int)a.size()? a.back() : a[m-1];

    if (wait_time < 0) wait_time = 0;

    cout << sum + wait_time - 1;

    return 0;
}