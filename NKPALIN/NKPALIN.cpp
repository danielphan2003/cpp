#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    freopen("NKPALIN.INP", "r", stdin);
    freopen("NKPALIN.OUT", "w", stdout);

    string s;
    cin >> s;

    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());

    int m = s.size(), n = m;
    vector< vector<int> > f(m+1, vector<int>(n+1, 0));

    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++i) {

            if (s[i] == rev_s[j])
                f[i][j] = f[i-1][j-1] + 1;
            else
                f[i][j] = max(f[i-1][j], f[i][j-1]);
        }
    string result;

    while (f[m][n] > 0)
        if (s[m] == rev_s[n])
            result += s[m],
            --m,
            --n;
        else
            if (f[m][n] == f[m-1][n])
                --m;
            else
                --n;
    cout << result;
}