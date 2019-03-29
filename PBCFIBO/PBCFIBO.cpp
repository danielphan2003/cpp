#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int n, k, s;
string F[] = {"0", "1", "2"};

void calibrate(string a, string b) {
    if (a.length() == b.length())
        return;

    int tmp = (a.length() > b.length()) ? a.length() : b.length();
    for (int i = 1; i <= tmp; ++i) {
        a = "0" + a;
        b = "0" + b;
    }
}

string add(string a, string b) {
    int reminder = 0, sum, base_a, base_b;

    string add = "";
    for (int i = a.length(); i >= 0; --i) {
        base_a = stoi(a.substr(i, 1));
        base_b = stoi(b.substr(i, 1));

        sum = base_a + base_b + reminder;
        if (sum > 10) {
            reminder = sum / 10;
            sum %= 10;
        }
        add = add.substr(1, i - 1) + str(sum);
    }
    return add;
}

int main() {
    freopen("PBCFIBO.INP", "r", stdin);
    freopen("PBCFIBO.OUT", "w", stdout);

    cin >> n >> k >> s;

    if (s == 1 || s == 2) {
        cout << s;
    }
    else {
        for (int i = 3; i <= s; ++i) {
            string tmp = F[1];
            F[1] = F[2];
            F[2] = add(F[2], tmp);
        }
        cout << F[2];
    }
}