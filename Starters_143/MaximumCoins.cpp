#include <bits/stdc++.h>
using namespace std;

int maximumNumberOfCoins(int x, int n) {
    int loses = n - x;
    long long lossCoin = 0, winCoin = 0;
    for(int i = 1; i <= loses; ++i) {
        lossCoin += (long long) pow(2, i);
    }
    for(int i = loses+1; i <= n; ++i) {
        winCoin += (long long) pow(2, i);
    }
    // cout << "Loses = " << loses << " lossCoin = " << lossCoin << " winCoin = " << winCoin << endl;
    return winCoin - lossCoin;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, n;
        cin >> n >> x;
        cout << maximumNumberOfCoins(x, n) << endl;
    }
}
