#include <iostream>
using namespace std;

// ceil function --> mannual
int Ceil(int A, int B) {
    if(A % B == 0) {
        return A / B;
    } 
    return (A/B) + 1;
}

// calculation of speed and all the staff
int needWork(int L, int V1, int V2) {
    int tortoise = Ceil(L, V1);
    int hare = Ceil(L, V2);
    if(tortoise == hare) {
        return -1;
    }
    return (tortoise - hare - 1);
}

// main function
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-- > 0) {
	    int L, V1, V2;
    	cin >> L >> V1 >> V2;
    	cout << needWork(L, V1, V2) << endl;
	}
	return 0;
}
