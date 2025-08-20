#include <iostream>
using namespace std;

// Recursive function to find the last occurrence of character 'x' in string 's'
// This version starts checking from the END of the string and moves LEFT
void lastOccur(string& s, char x, int i, int &ans) {
    // Base case: if index goes out of range (less than 0), stop recursion
    if (i < 0) {
        return;
    }

    // If the current character matches 'x'
    if (s[i] == x) {
        ans = i;   // Store this index as the last occurrence
        return;    // Stop further recursion (since scanning right-to-left ensures it's the last one)
    }

    // Recursive call: check the previous character (move left)
    lastOccur(s, x, i - 1, ans);
}

int main() {
    string s;
    cin >> s;   // Input string
    char x;
    cin >> x;   // Input character to search for

    int ans = -1;   // Default value if character is not found
    lastOccur(s, x, s.size() - 1, ans); // Start recursion from the last index of the string

    cout << ans << endl;  // Print result (-1 if not found, else last index)
    return 0;
}
