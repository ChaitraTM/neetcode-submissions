class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int> s1;
        unordered_map<char,int> t1;
        if(s.length() != t.length()) return false;
        for(auto x:s){
            s1[x]++;
        }
        for(auto y:t){
            t1[y]++;
        }
    
    return s1==t1;
    }
};
