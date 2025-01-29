#include <vector>
#include <algorithm>

struct Solution{
public:
    double findMedian (std::vector <int> nums1, std::vector <int> nums2){
        std::vector <int> sum = nums1 + nums2;
        sort(sum.begin(), sum.end());
        int n = sum.size();
        if (n % 2 == 1)
        {
            return sum[n / 2];
        }
        else
        {
            return (sum[n / 2 - 1] + sum[n / 2]) / 2.0;
        }
    }
};

int main(){
    Solution solution;
    std::vector <int> nums1 = {1, 3,4,1};
    std::vector <int> nums2 = {2,11,13,5};
    std::cout <<solution.findMedian(nums1, nums2) <<std::endl;
    return 0;
}