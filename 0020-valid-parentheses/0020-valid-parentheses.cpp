class Solution {
public:
    bool isValid(string str) {
 /*       if (str.length() % 2 == 1 ){
            return false;
        }
        */
        
        stack<char> parenthesis;
        for (char s : str) {
            if (s == '(' || s == '{'|| s == '['){
                 parenthesis.push(s);
            }
            else if ( !parenthesis.empty() && s == '}' && parenthesis.top() == '{' ){
                parenthesis.pop();
            }
            else if ( !parenthesis.empty() && s == ')' && parenthesis.top() == '(' ){
                parenthesis.pop();
            }
            else if ( !parenthesis.empty() && s == ']' && parenthesis.top() == '[' ){
                parenthesis.pop();
            }
            else{ 
                // this is if parenthesis is empty but it is trying to push right parenthesis, as in first char
                // or the string is not parenthesis only
            return false;
            }
        }
        // if EVERYTHING is parenthesis, there should be no errors and it should just return the status of the stack
        return parenthesis.empty();
    }
};
