#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int N = 0, M = 10001, valveCount = 0;
vector < pair<int, int> > valve(50010);

void openValve(int gallon1, int gallon2) {
    valve[valve.size()] = 1;
}

void isOpened(int gallon1, int gallon2) {
    // Binary search
}

int main() {
    freopen("IOIBIN.INP", "r", stdin);
    freopen("IOIBIN.OUT", "w", stdout);

    cin >> P;
    int req2 = 0;
    pair<int> Z2[10001];
    for (int i = 1; i <= P; ++i) {
        cin >> X[i] >> Y[i] >> Z;

        N = max(N, max(X, Y));
        M = min(M, min(X, Y));

        if (Z == 1)
            openValve(X, Y);
        else
            isOpened(X, Y);
    }
}