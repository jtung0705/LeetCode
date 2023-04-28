class Solution {
public:
    bool isAnagram(string s, string t) {
        std::sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t);
}
};