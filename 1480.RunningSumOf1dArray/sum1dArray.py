class Solution:

    def runningSum(self, nums: List[int]) -> List[int]:
        results = []
        
        for num in nums:
            if len(results) == 0:
                results.append(num)
            else:
                results.append(results[-1] + num)
            
        return results