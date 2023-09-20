#include <iostream>
using namespace std;

int OffBYOne(int A, int B) {
    return ((A + B) * 10) + 1;
}

int main() {
	// your code goes here
	int A, B;
	cin >> A >> B;
	cout << OffBYOne(A, B) << endl;
	return 0;
}