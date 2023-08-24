class Solution:
    def removeStars(self, s: str) -> str:
        stack = []
        string = ""
        for c in s:
            if c != '*': 
                stack.append(c)
            elif len(stack) != 0: #make sure the stack is not empty, so you can pop
                stack.pop()        
        for ch in stack:
            string += ch #just keep adding everything inside the stack
        return string