class Solution:
    def reverseStr(self, s, k):
        if len(s) <= k:
            return s[::-1]
        elif len(s) < 2 * k:
            return s[:k][::-1] + s[k:]
        else:
            return s[:k][::-1] + s[k:2 * k] + self.reverseStr(s[2 * k:], k)
