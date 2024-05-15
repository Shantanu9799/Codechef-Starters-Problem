#include <bits/stdc++.h>
using namespace std;

int minimumAnimals(int legs) {
    if(legs <= 4) return 1;
    int cows = legs / 4;
    legs = legs - (cows * 4);
    int chickens = legs / 2;
    return cows + chickens;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--) {
        int legs;
        cin >> legs;
        cout << minimumAnimals(legs) << endl;
    }
}
