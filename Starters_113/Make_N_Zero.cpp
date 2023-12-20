#include <iostream>
using namespace std;

bool isPossibleToMakeZero(int n) {

    if (n == 0) {
        return true;
    }

    else if (n < 0) {
        return false;
    }

    else {
        return isPossibleToMakeZero(n - 4) || isPossibleToMakeZero(n - 3);
    }
}

int main() {

    int t;
    cin >> t;
    while(t-- > 0) {
        int n;
        cin >> n;
        bool result = isPossibleToMakeZero(n);
    
        if (result) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
