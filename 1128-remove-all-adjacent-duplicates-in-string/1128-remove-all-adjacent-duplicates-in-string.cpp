class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk; 
        string answer = "";
        for (char ch : s){
             if ( !stk.empty() and stk.top() == ch ){
              stk.pop();
              }
             else{     
             stk.push(ch);
             }
        }
        
         for (int i = stk.size(); i > 0; i--){
             answer += stk.top();
             stk.pop();
        }
        reverse( answer.begin(), answer.end() );
        return answer;
    }
};