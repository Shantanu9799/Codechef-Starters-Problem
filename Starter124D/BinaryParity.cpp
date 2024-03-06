#include <bits/stdc++.h>
using namespace std;

string binaryParity(int n) {
    int cnt = 0;
    while(n != 0) {
        cnt += (n & 1);
        n >>= 1;
    }
    return (cnt & 1) == 0 ? "EVEN" : "ODD";
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        cout << binaryParity(n) << endl;
    }
    return 0;
}
