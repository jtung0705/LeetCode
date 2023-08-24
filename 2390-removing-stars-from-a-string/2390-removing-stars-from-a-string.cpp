class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        string smp = "";
        for (char c : s){
            if ( c != '*' ){
                stk.push(c);
            }
            else{
                stk.pop();
            }
        }   
        while (not stk.empty() ){
            smp += stk.top(); 
            stk.pop();
        }
        // can also do while (!stk.empty()) ?
        /*
        for (int i = stk.size(); i > 0; i--){
            smp += stk.top(); 
            stk.pop();
        }
        */
        reverse(smp.begin(), smp.end()); 
        // testcase 3 is really long, cannot do stk.top() + smp;
        return smp;    
    }
};