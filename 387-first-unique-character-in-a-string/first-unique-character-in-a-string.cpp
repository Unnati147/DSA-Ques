class Solution {
public:
    int firstUniqChar(string s) {
        
    // har character (a–z) ki frequency store karne ke liye vector
    vector<int> freq(26,0);
    // pehla loop: string ke har character ka count nikal rahe hain
     for(int i =0 ; i<s.size();i++){
        freq[s[i] - 'a' ]++;
     }
    //  dusra loop: string ke order me pehla unique character dhundh rahe hain
     for(int i =0; i<s.size(); i++){
        if(freq[s[i] -'a'] == 1)
            return i;
     }
     return -1;
     }

};