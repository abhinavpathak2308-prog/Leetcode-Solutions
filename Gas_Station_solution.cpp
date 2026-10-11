class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int x=accumulate(gas.begin(),gas.end(),0);
        int y=accumulate(cost.begin(),cost.end(),0);
        if (y>x){
            return -1;
        }
        int g=0;
        int a=0;
        for (int i=0;i<gas.size();i++){
            g+=(gas[i]-cost[i]);
            if (g<0){
                a=i+1;
                g=0;
            }
        }
        return a;
    }
};