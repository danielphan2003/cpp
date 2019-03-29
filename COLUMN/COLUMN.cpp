#include <cstdio>
#include <iostream>
#include <boost/math/common_factor.hpp>

using namespace std;

int bcnn = 1, n;
int len[10001] = { 0 };

int main() {
    freopen("COLUMN.INP", "r", stdin);
    freopen("COLUMN.OUT", "w", stdout);

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> len[i];
        bcnn = boost::math::lcm(bcnn, len[i]);
    }
    for (int i = 1; i <= n; ++i)
        cout << bcnn/len[i] << endl;
    return 0;
}