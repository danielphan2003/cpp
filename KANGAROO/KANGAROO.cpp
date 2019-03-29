#include <cstdio>
#include <iostream>

using namespace std;

int desert[1002][1002] = { 1234567890 };

int main() {
    freopen("KANGAROO.INP", "r", stdin);
    freopen("KANGAROO.OUT", "w", stdout);

    cin >> M >> N;
    for (int i = 1; i <= M; ++i)
        for (int  j = 1; j <= N; ++j)
            cin >> desert[i][j];

    for (int i = 1; i <= M; ++i)
        for (int j = 1; j <= N; ++j) {
            if (i)
        }

    return 0;
}