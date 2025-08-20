class Solution {
public:
    bool palindromeRecursion(string &s, int start, int end){
        // base case: agar start >= end to palindrome hai
        if(start >= end) return true;

        // agar non-alphanumeric hai to skip
        if(!isalnum(s[start])) return palindromeRecursion(s, start+1, end);
        if(!isalnum(s[end])) return palindromeRecursion(s, start, end-1);

        // agar mismatch hai to false
        if(tolower(s[start]) != tolower(s[end])) return false;

        // recursive call andar ke characters ke liye
        return palindromeRecursion(s, start+1, end-1);
    }

    bool isPalindrome(string s) {
        return palindromeRecursion(s, 0, s.size()-1);
    }
};


    // bool isPalindrome(string s) {

    // int i=0;
    // int j=s.size()-1;
    // while (i<=j){
    //    if (!isalnum(s[i])){i++;continue;}
    //    if (!isalnum(s[j])){j--; continue;}
    //    if (tolower(s[i]) !=tolower(s[j])) return false;
    //    else{
    //     i++;
    //     j--;
    //    }
    // }
    // return true;
//     }
// };