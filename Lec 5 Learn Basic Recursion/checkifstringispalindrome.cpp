#include <iostream>
using namespace std;

bool palindromeCheck(string& s) {
    static int i = 0;
    int n = s.size();
    if (i >= n / 2) {
        i = 0;  // Reset after checking
        return true;
    }
    if (s[i] != s[n - i - 1]) {
        i = 0;  // Reset if not a palindrome
        return false;
    }
    i++;
    return palindromeCheck(s);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    if (palindromeCheck(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}
