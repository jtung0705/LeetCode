class Solution(object):
    def removeStars(self, s):
        """
        :type s: str
        :rtype: str
        """
        stack = []
        string = ""
        for char in s:
            if char == '*' and len(stack) != 0:
                stack.pop()
            else:
                stack.append(char)
        for ch in stack:
            string += ch
        return string
        