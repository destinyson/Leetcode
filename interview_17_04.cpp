/**************************************面试题 17.04. 消失的数字*************************************

数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？

示例 1：

输入：[3,0,1]
输出：2


示例 2：

输入：[9,6,4,2,3,5,7,0,1]
输出：8
*****************************************************************************************************/

//0~n和为n*(n+1)/2，将数组所有数求和，与前公式差值就是缺的数

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int len = nums.size();
        for (int i = 0; i < len; i++)
            sum = sum + nums[i];
        return len * (len + 1) / 2 - sum;
    }
};
