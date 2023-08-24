class Solution:
    def removeStars(self, s: str) -> str:
        stack = []
        strn = ""
        for c in s:
            if c != '*': 
                stack.append(c)
                #print(c)
            elif len(stack) != 0:
                stack.pop()        
        #print(stack)
        for ch in stack:
            strn += ch
        return strn