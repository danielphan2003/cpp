#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

int N, K;
int Y[1000010] = {0};

int main() {
    freopen("MOBI.INP", "r", stdin);
    //freopen("MOBI.INP", "w", stdout);

    cin >> N >> K;
    for (int i = 0; i < N; ++i) {
        int x;
        scanf("%d", &x);
        scanf("%d", &Y[x]);
        cout << Y[x];
    }
    return 0;
}