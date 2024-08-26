#include <iostream>
#include <string> // Include the string library
using namespace std;
int main() {
    string phrase = "The more you make programs yourself the more you learn";
    string word = phrase.substr(13, 22);
    
    cout << "Word extracted: " << word <<endl;
    
    return 0;
}
