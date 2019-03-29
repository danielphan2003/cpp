#include <cstdio>
#include <iostream>

using namespace std;

int n, m, k, ans = 0;
int land[101][101] = { 0 };
int visited[101][101] = { 0 };
int X[] = {-1, 0, 1, 0}, Y[] = {0, 1, 0, -1};

void spread(int row, int col) {

    if (row == 0 || row == n + 1 || col == 0 || col == m + 1)
        return;

    visited[row][col] = ans;

    for (int dir = 0; dir < 4; ++dir) {
        int x = row + X[dir], y = col + Y[dir];

        if (land[row][col] == land[x][y] && visited[x][y] == 0)
            spread(x, y);
    }
}

int main() {
    freopen("minesweeper.inp", "r", stdin);
    cin >> n >> m >> k;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> land[i][j];

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (visited[i][j] == 0) {
                ++ans;
                spread(i, j);
            }
    cout << ans - 1 << endl;
    return 0;
}