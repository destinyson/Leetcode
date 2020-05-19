/**************************************面试题03 - 数组中重复的数字*************************************

找出数组中重复的数字。


在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。请找出数组中任意一个重复的数字。

示例 1：

输入：
[2, 3, 1, 0, 2, 5, 3]
输出：2 或 3


限制：

2 <= n <= 100000

*****************************************************************************************************/

//既然给了向量元素范围，定义bool型向量用来判断对应脚标数值是否出现过，之后遍历向量判断即可

class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int num = nums.size();
        vector<bool> appear(num, false);
        for (int i = 0; i < num; i++)
        {
            if (appear[nums[i]])
                return nums[i];
            appear[nums[i]] = true;
        }
        return -1;
    }
};
