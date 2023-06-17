#include <iostream>
#include <string>

using namespace std;

int countOccurrences(const string &s1, const string &s2) {
    int count = 0;
    size_t index = 0;

    /*find() returns the index of the first occurrence of the first string in the second string, 
    or std::string::npos if the first string is not found in the second string.*/
    while (index != string::npos) {
        index = s2.find(s1, index);
        if (index != string::npos) {
            count++;
            index++;  // Move to the next character after the occurrence of s1 in s2
        }
    }
    return count;
}

int main() {
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    cout << countOccurrences(s1, s2) << endl;   
    return 0;
}
