#include <iostream>
using namespace std;

string inLimit(int x) {
    return x < 100 ? "YES" : "NO";
}

int main() {
	// your code goes here
	int AQI;
	cin >> AQI;
	cout << inLimit(AQI) << endl;
	return 0;
}