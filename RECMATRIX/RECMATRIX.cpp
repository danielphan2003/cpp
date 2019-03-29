#include <cstdio>
#include <iostream>

int n, m;
int maze[1002][1002];
int Tx, Ty, Ex, Ey;
int visited[1002][1002] = {0};

int main() {
    freopen("RECMATRIX.INP", "r", stdin);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j) {
            cin >> maze[i][j];
            if (maze[i][j] == "T") {
                Tx = i;
                Ty = j;
            }
            if (maze[i][j] == "E") {
                Ex = i;
                Ey = j;
            }
        }
}