class Solution:
    def canCompleteCircuit(self, gas: list[int], cost: list[int]) -> int:
        if sum(cost)>sum(gas):
            return -1
        g=0
        a=0
        for i in range(0,len(gas)):
            g+=(gas[i]-cost[i])
            if g<0:
                g=0
                a=i+1
        return a