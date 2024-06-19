#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;
    cin >> x;
    if((x & 1) == 0) cout << x/2;
    else cout << (x+1) / 2;
}
