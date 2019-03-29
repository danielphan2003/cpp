// This works
#include <cstdio>
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    freopen("LIQ.INP", "r", stdin);
    freopen("LIQ.OUT", "w", stdout);

    int N, A[100];
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    int result = 1, k = 0;
    vector<int> b(N+1, INT_MAX);
    b[0] = INT_MIN;

    for (int i = 0; i < N; ++i) {
        /// Tìm phần tử lớn nhất nhỏ hơn A[i] trong vector b
        k = lower_bound(b.begin(), b.end(), A[i]) - b.begin();

        b[k] = A[i];

        result = max(result, k);
    }
    cout << result;
    return 0;
}