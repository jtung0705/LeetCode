class Solution:
    def isPalindrome(self, x: int) -> bool:
        stringX = str(x)
        begin = 0
        end = len(stringX) - 1
        while begin < end:
            if stringX[begin] != stringX[end]:
                return False
            begin += 1
            end -= 1
        return True

