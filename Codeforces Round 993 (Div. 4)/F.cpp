#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

using ll = long long;

int main() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    // Calculate the total beauty of the grid
    ll totalBeauty = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            totalBeauty += (ll)a[i] * b[j];
        }
    }

    // Prepare row and column sums
    vector<ll> rowSum(n, 0), colSum(m, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rowSum[i] += (ll)a[i] * b[j];
            colSum[j] += (ll)a[i] * b[j];
        }
    }

    // Precompute all possible results of newBeauty
    unordered_set<ll> temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ll newBeauty = totalBeauty - rowSum[i] - colSum[j] + (ll)a[i] * b[j];
            temp.insert(newBeauty);
        }
    }

    // Process each query
    while (q--) {
        ll x;
        cin >> x;

        if (temp.count(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
