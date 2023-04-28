class Solution {
public:
    bool isAnagram(string a, string b) {

std::sort(    a.begin() ,  a.end()     ) ; // in-place sort
std::sort(    b.begin() ,  b.end()     ) ;
return (a == b);          
}

};