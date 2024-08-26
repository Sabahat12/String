#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double pi = M_PI; // Value of pi from the cmath library

    // Print pi with default precision
    cout << "Default precision: " << pi <<endl;

    // Print pi with precision set to 4
  cout << "Precision set to 4: " <<setprecision(4) << pi <<ndl;

    // Print pi with precision set to 8
    cout << "Precision set to 8: " <<setprecision(8) << pi <<endl;

    // Print pi with precision set to 12
    cout << "Precision set to 12: " <<setprecision(12) << pi <<endl;

    return 0;
}
