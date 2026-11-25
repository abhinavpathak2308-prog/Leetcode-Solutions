class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int boat=0;
        int left=0;
        int right=people.size()-1;
        while (left<right){
            if (people[left]+people[right]>limit){
                boat++;
                right--;
            }
            if (people[left]+people[right]<=limit){
                boat++;
                left++;
                right--;
            }
        }
        if (left==right){
            return boat+1;
        }else{
            return boat;
        }
    }
};