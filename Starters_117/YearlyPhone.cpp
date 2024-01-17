#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int year;
    cin >> year;
    string model = "K" + to_string(year).substr(2, 2);
    cout << model; 
}
