#include <bits/stdc++.h>
using namespace std;

int minimumTimeToDistribute(int n, int m) {
    if(m%n == 0) return 0;
    int avg = m / n;
    // cout << "avg = " << avg << endl; 
    if(avg == 0) return n - m;
    return min(m - (n*avg), n*(avg+1) - m);
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        cout << minimumTimeToDistribute(n, m) << endl;   
    }
}
