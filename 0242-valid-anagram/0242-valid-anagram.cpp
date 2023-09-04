class Solution {
public:
    bool isAnagram(string s, string t) {
        int histogram[26] = {0};
        for (char c : s){
              histogram[c % 'a']++;
        }
        for (char ch : t){
            histogram[ch % 'a']--;
        }
        for (int i = 0; i < 26; i++){
            if(histogram[i] != 0){
                return false;
            }
        }
        return true;
    }
};