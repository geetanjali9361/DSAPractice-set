class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    bool in1[101] = {false};
    bool in2[101] = {false}; 
    bool in3[101] = {false};
    
    for(int num : nums1) in1[num] = true;
    for(int num : nums2) in2[num] = true;
    for(int num : nums3) in3[num] = true;
    
    vector<int> result;
    for(int i = 1; i <= 100; i++) {
        if((in1[i] + in2[i] + in3[i]) >= 2) {
            result.push_back(i);
        }
    }
    return result;
}
};