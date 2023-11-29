#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int x, n;
	    cin >> x >> n;
	    int plane = (ceil) ((double) n / (double) 100);
	    cout << max(0, plane-x) << endl;
	}
	return 0;
}
