/**************************************349 - 两个数组的交集*************************************

给定两个数组，编写一个函数来计算它们的交集。

示例 1:

输入: nums1 = [1,2,2,1], nums2 = [2,2]
输出: [2]


示例 2:

输入: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
输出: [9,4]

说明:

输出结果中的每个元素一定是唯一的。
我们可以不考虑输出结果的顺序。
*****************************************************************************************************/

//首先将两个向量排序，之后利用双指针思路取交集

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int len1 = nums1.size();
        int len2 = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0;
        int j = 0;
        while (i < len1 && j < len2)
        {
            if (nums1[i] == nums2[j])
            {
                if (ans.size() == 0 || ans[0] != nums1[i])
                    ans.insert(ans.begin(), nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] > nums2[j])
                j++;
            else
                i++;
        }
        return ans;
    }
};
