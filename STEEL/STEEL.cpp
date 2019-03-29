#include <cstdio>
#include <iostream>

using namespace std;

struct coor {
    float x, y;
}

coor steel[2010], mold[2010];

int main() {
    freopen("STEEL.INP", "r", stdin);
    freopen("STEEL.OUT", "w", stdout);

    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> steel[i].x >> steel[i].y;
    cin >> M;
    for (int i = 0; i < M; ++i)
        cin >> mold[i].x >> mold[i].y;
    float sum = 0.0;
    for (int i = 0; i < M - 1; ++i) {
        float
            vect_x = mold[i+1].x - mold[i].x,
            vect_y = mold[i+1].y - mold[i].y,
            len_vect = sqrt(sqr(vect_x) + sqr(vect_y));

    }
}