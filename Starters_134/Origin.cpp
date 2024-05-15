#include <bits/stdc++.h>
using namespace std;

unsigned long long int originValueOfAllInt(unsigned long long int n) {
    unsigned long long int totalValue = (n / 9) * 45; // Sum of digits from 1 to 9 is 45
    totalValue += (n % 9) * ((n % 9) + 1) / 2; // Sum of digits from 1 to k is k*(k+1)/2
    return totalValue;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        unsigned long long int n;
        cin >> n;
        cout << originValueOfAllInt(n) << endl;
    }
    return 0;
}
