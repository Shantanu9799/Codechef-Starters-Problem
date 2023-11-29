#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int total, boys, k;
	    cin >> total >> boys >> k;
	    int girls = total - boys;
	    boys = boys - (k * (boys / k));
	    girls = girls - (k * (girls / k));
	    cout << abs(boys-girls) << endl;
	}
	return 0;
}
