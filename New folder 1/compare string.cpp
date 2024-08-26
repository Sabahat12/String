#include <iostream>
#include <string>
using namespace std;
int main() {
    string string1 = "abcdefgh";
   string string2 = "ijklmnop";

    // Check if substring of string1 starting from index 2 and of length 4
    // is equal to substring of string2 starting from index 8 and of length 4
    if (string1.compare(2, 4, string2, 8, 4) == 0) {
     cout << "Substrings are equal." <<endl;
    } else {
      cout << "Substrings are not equal." <<endl;
    }

    return 0;
}
