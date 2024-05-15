#include <bits/stdc++.h>
using namespace std;

long long maxAmount(int x, int y) {
    long long maximumAmount = x;
    while(y--) {
        long long amountByAdding = maximumAmount + 1000;
        long long amountByDoubling = maximumAmount * 2;
        if(amountByAdding > amountByDoubling) maximumAmount = amountByAdding;
        else maximumAmount = amountByDoubling;
    }
    return maximumAmount;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        cout << maxAmount(x, y) << endl;
    }
}
