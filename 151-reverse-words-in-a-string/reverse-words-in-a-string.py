class Solution:
    def reverseWords(self, s: str) -> str:
        result=s.split()
        ans=[]
        for i in range(len(result)-1,-1,-1):
            ans.append(result[i])
            if i!=0:
                ans.append(" ")
        return "".join(ans)