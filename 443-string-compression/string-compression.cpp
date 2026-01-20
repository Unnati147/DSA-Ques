class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index=0;
        int i=0;
        while(i<n){
            int curr_chars = chars[i];
            int count=0;

            // find count of duplicates
            while(i<n && chars[i]==curr_chars){
                i++;
                count++;
            }
            // Assign the values to index
            chars[index] = curr_chars;
            index++;

            if(count>1){
                string count_str = to_string(count);
                for(char &ch:count_str){
                    chars[index] = ch;
                    index++;
                }
            }
        }
       return index;
    }
};