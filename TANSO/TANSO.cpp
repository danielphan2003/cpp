#include <cstdio>
#include <iostream>

using namespace std;
string s;
int
    diff = 0,
    cage[255] = { 0 },
    appeared[255] = { 0 },
    MAX = 0;
char c;

int main() {
    freopen("TANSO.INP", "r", stdin);
    freopen("TANSO.OUT", "w", stdout);

    cin >> s;
    for (int i = 1; i <= s.length(); ++i) {
        int tmp = static_cast<int>(s.at(i));
        ++cage[tmp];
    }

    for (int i = 1; i <= 255; ++i)
        if (cage[i] != 0) {
            ++diff;
            appeared[diff] = i;
        }

    cout << diff;

    for (int i = 1; i <= diff; ++i) {
        if (MAX < cage[appeared[i]])
            MAX = cage[appeared[i]];
        c = static_cast<char>(appeared[i]);
        cout << c << cage[appeared[i]];
    }

    c = static_cast<char>(MAX);
    cout << c;

    return 0;
}