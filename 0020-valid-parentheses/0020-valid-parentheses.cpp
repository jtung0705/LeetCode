class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, char>hashmap = {
            {']','['}, 
            {'}','{'}, 
            {')','('} 
        };
        std::stack<char> stack;
        for(char c : s){
            if (c == '[' || c == '{' || c == '(' ){
            stack.push(c);
        }
            // is the stack empty
            // what is the top
            // does my character correspond TO the top
            // last two can be helped with a hashmap because ican check if the key (right closing) is equal to top?
            else if ( !stack.empty() && (hashmap[c] == stack.top() )  ){
                stack.pop();
            }
            else{
                return false;
            }
        
   }
        
return stack.empty();
    }
};