class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
     
        vector<int> v1;
        
        for(int i:nums){
            v1.push_back(i);
        }
         for(int i:nums){
            v1.push_back(i);
        }
        return v1;
    }
};