#include <iostream>
using namespace std;

class Solution {
public:
void helper(string &s, string &part){
    int found= s.find(part);
    if(found != string :: npos){
        string left = s.substr(0, found);
        string right = s.substr(found+part.size(), s.size());
        s= left+right;
    helper(s, part);
    }
    else{
        return;
    }
}
    string removeOccurrences(string s, string part) {
     helper(s,part);
     return s;
    }
};
