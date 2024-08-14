#include <bits/stdc++.h>
using namespace std;

const int MAX_SUM = 200;
bool is_prime[MAX_SUM + 1];

void sieve() {
    fill(is_prime, is_prime + MAX_SUM + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX_SUM; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_SUM; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    sieve();  // Precompute prime numbers
    
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        bool found = false;
        
        // Check all pairs (i, j)
        for (int i = 0; i < N && !found; ++i) {
            for (int j = i + 1; j < N && !found; ++j) {
                if (!is_prime[A[i] + A[j]]) {
                    cout << i + 1 << " " << j + 1 << endl;
                    found = true;
                }
            }
        }
        
        if (!found) {
            cout << -1 << endl;
        }
    }
    
    return 0;
}
