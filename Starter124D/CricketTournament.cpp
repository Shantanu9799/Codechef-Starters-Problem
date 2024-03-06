#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t-- > 0) {
        int n, m;
        cin >> n >> m;
        int totalmatches = 0;
        while(n > 1) {
            totalmatches += (n / 2);
            n = (n + 1) / 2;  // This line is corrected
        }
        
        if(totalmatches >= m) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
