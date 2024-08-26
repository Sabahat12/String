#include <iostream>
#include <string>
using namespace std;
int main() {
    string mainString = "Hello, this is a test string.";
    string subString = "test";

    // Find the position of subString in mainString
    size_t found = mainString.find(subString);

    // Output the result
    cout << "Substring found at position: " << found << std::endl;

    return 0;
}
