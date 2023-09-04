class Solution:
    def isValid(self, s: str) -> bool:
            stack = []
            hashmap = { ')':'(',
                       ']':'[', 
                      '}': '{' 
                      }
            for char in s:
                if char == '(' or char == '[' or char == '{':
                    stack.append(char)
                elif len(stack) != 0 and hashmap[char] == stack[-1]:
                    stack.pop()
                else:
                    return False
            return len(stack) == 0