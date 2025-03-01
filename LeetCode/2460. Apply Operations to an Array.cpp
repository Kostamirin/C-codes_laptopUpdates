// Created by kley-muner on 3/1/25.
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        if (nums.size() == 2)
        {
            if (nums[0] == 0 && nums[1]==0){return nums;}
            else if (nums[0] == 0){nums.push_back(0);nums.erase(nums.begin()); return nums;}
            else if (nums[0] == nums[1]){nums[0]*=2; nums[1]=0; return nums;}
            else {return nums;}
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == nums[i+1])
            {
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        for (int i = 0; i <= nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                nums.push_back(0);
                nums.erase(std::begin(nums) + i);
            }
        }
        return nums;
    }
};

#include <iostream>
int main()
{
    Solution solution;
    std::vector<int> nums = {847,847,0,0,0,399,416,416,879,879,206,206,206,272};
    vector<int> answer = {1694,399,832,1758,412,206,272,0,0,0,0,0,0,0};
    vector<int> answer_my = solution.applyOperations(nums);
    std::cout <<'[';for (int i = 0; i < answer.size(); i++){std::cout <<answer[i] <<',';} std::cout <<']' <<std::endl;
    std::cout <<'[';for (int i = 0; i < answer_my.size(); i++){std::cout <<answer[i] <<',';} std::cout <<']' <<std::endl;

    return 0;
}