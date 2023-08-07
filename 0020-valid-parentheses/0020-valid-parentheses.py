class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        hash = { ']':'[',
                 ')' :'(',
                 '}' :'{'
               }
        for c in s:
            if c == '[' or c == '(' or c == '{':
                stack.append(c)
            elif bool(stack) and hash[c] == stack[-1]: #-1 gets the last element and pops it 
                stack.pop() # can pop from a list in Python
            else:
                return False
        return not bool(stack) # the stack should be empty, but bool is 0 which is false, so put a not