#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int N, K;
        cin >> N >> K;
        
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        // Sort the array in descending order
        sort(A.rbegin(), A.rend());
        
        // Calculate the maximum value of f(C)
        int result = 0;
        for (int i = 0; i < K - 1; ++i) {
            result += A[i] + A[i + 1];
        }
        
        // Print the result for the current test case
        cout << result << '\n';
    }
    
    return 0;
}
