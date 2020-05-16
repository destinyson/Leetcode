/**************************************面试题57 - II 和为s的连续正数序列*************************************

输入一个正整数 target ，输出所有和为 target 的连续正整数序列（至少含有两个数）。

序列内的数字由小到大排列，不同序列按照首个数字从小到大排列。



示例 1：

输入：target = 9
输出：[[2,3,4],[4,5]]
示例 2：

输入：target = 15
输出：[[1,2,3,4,5],[4,5,6],[7,8]]


限制：

1 <= target <= 10^5
*****************************************************************************************************/

//n个连续整数的加和sum，如果n为奇数，则sum一定是n的倍数；如果n为偶数，则sum的2倍一定是n的奇数倍

//从1开始的连续整数的个数，为连续整数个数的上限

//对于每一个个数，首先求连续整数中位数赋在中间，之后向两侧拓展求值

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> v;
        int above = (int)((sqrt(8.0 * target + 1.0) - 1.0) / 2.0);
        int temp = target << 1;
        for (int n = above; n > 1; n--)
        {
            if (temp % n == 0)
            {
                vector<int> ans(n);
                if (n % 2)
                {
                    int average = target / n;
                    int middle = n >> 1;
                    ans[middle] = average;
                    for (int i = 1; i <= middle; i++)
                    {
                        ans[middle - i] = average - i;
                        ans[middle + i] = average + i;
                    }
                    v.push_back(ans);
                }
                else if ((temp / n) % 2)
                {
                    int average = (temp / n + 1) >> 1;
                    int middle = n >> 1;
                    ans[middle] = average;
                    for (int i = 1; i <= middle; i++)
                        ans[middle - i] = average - i;
                    for (int i = middle + 1; i < n; i++)
                        ans[i] = average + i - middle;
                    v.push_back(ans);
                }
            }
        }
        return v;
    }
};
