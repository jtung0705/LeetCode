class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk; 
        string answer = "", ans2 = "", ans3 = "";
        for (char ch : s){
             if ( !stk.empty() and stk.top() == ch ){
                 // cannot have stack top first, because if you do, they don't check if stack is empty
              stk.pop();
              }
             else{     
             stk.push(ch);
             }
        }
        while ( !stk.empty() ){
            answer = stk.top() + answer; // will add to the left side of the string first, and then the rest
            stk.pop();
        }
        return answer;
        /*
         for (int i = stk.size(); i > 0; i--){
             //starts from top, goes down
             answer += stk.top(); // have to reverse if I do this because its like
             " " + k
             then 
             k + j
             versus
             answer = stk.top + answer; 
             which would be k + " " 
             then jk  
             stk.pop();
        }
        reverse( answer.begin(), answer.end() );
        */
    }
};