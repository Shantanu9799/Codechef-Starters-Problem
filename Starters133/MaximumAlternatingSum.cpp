#include <bits/stdc++.h>
using namespace std;

int maxAlterSum(int n, vector<int> a) {
    sort(a.begin(), a.end());
    int posSection = 0, negSection = 0, idx = n/2;
    for(int i = 0; i < idx; ++i) {
        negSection += a[i];
        posSection += a[i+idx];
    }
    if((n & 1) == 1) posSection += a[n-1];
    return posSection - negSection;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        cout << maxAlterSum(n, a) << endl;
    }
}
