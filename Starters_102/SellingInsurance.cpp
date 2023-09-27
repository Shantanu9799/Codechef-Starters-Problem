#include <iostream>
#include <cmath>

using namespace std;

int minimumInsurancesToEarn(int targetEarnings, int insuranceCost) {
    int commissionPercentage = 20; // 20%
    double commissionPerInsurance = (commissionPercentage / 100.0) * insuranceCost;
    int minInsurances = ceil(targetEarnings / commissionPerInsurance);

    return minInsurances;
}

int main() {
    int T; // Number of test cases
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int X; // Cost of an insurance
        cin >> X;

        // Calculate the minimum number of insurances Chef needs to sell to earn at least 100 dollars
        int minInsurances = minimumInsurancesToEarn(100, X);

        // Output the result
        cout << minInsurances << endl;
    }

    return 0;
}

 