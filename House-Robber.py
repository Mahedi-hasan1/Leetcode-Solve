class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)
        res = [0]*n
        res[0] = nums[0]
        if n>1 :
            res[1] = max(nums[1], res[0])
        
        for i in range(2, n):
            #print(i)
            res[i] = max(res[i-1], res[i-2]+nums[i])
        return res[n-1]
        