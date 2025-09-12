class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;
        int left=0, right=0, maxLen=0;
        for(right= 0 ; right<s.length(); right++){
            while(window.find(s[right]) != window.end()){
            window.erase(s[left]);
            left++;

            }
             window.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
        
    }
};