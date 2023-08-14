class Solution {
public:
    string removeStars(string s) {
        stack<char> stk, rvrse;
        string smp = "";
        for (char c : s){
            if ( c != '*' ){
                stk.push(c);
            }
            else{
                stk.pop();
            }
        }   
        for (int i = stk.size(); i > 0; i--){
            rvrse.push( stk.top() );
            smp += stk.top();
            stk.pop();
        }
        reverse(smp.begin() , smp.end());
        return smp;    
    }
};