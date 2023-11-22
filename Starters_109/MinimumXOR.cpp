#include <bits/stdc++.h>
using namespace std;

// int minimumXOR(int n, vector<int> a) {
//     int minXOR = INT_MAX;
//     int totalXOR = 0;
//     for(int i = 0; i < n; i++) {
//         totalXOR ^= a[i];
//     }
//     // cout << "Total XOR = " << totalXOR << endl;
//     minXOR = min(minXOR, totalXOR);
//     for(int i = 0; i < n; i++) {
//         int XORexcludeOne = 0;
//         for(int j = 0; j < n; j++) {
//             if(i != j) XORexcludeOne ^= a[j];
//         }
//         // cout << i << "th XOR = " << XORexcludeOne << endl;
//         minXOR = min(minXOR, XORexcludeOne);
//     }
//     return minXOR;
// }
int minimumXOR(int n, vector<int>& a) {
    int totalXOR = 0;
    for(int i = 0; i < n; i++) {
        totalXOR ^= a[i];
    }

    int minXOR = totalXOR;

    for(int i = 0; i < n; i++) {
        int XORexcludeOne = totalXOR ^ a[i];
        minXOR = min(minXOR, XORexcludeOne);
    }

    return minXOR;
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int n;
	    cin >> n;
	    vector<int> a(n);
	    for(int i = 0; i < n; i++) {
	        cin >> a[i];
	    }
	    cout << minimumXOR(n, a) << endl;
	}
	return 0;
}
