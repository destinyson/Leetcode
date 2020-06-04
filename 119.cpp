/**************************************119 - 杨辉三角 II*************************************

给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。

在杨辉三角中，每个数是它左上方和右上方的数的和。

示例:

输入: 3
输出: [1,3,3,1]

进阶：

你可以优化你的算法到 O(k) 空间复杂度吗？
*****************************************************************************************************/

//杨辉三角的第k行，其实是C(k,0)~C(k,k)

//由组合数定义可得：C(k,i)=C(k,i-1)*(k+1-i)/i

//另外，组合数是对称的，所以算一半就行

//最后，注意可能会爆int范围

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex + 1);
        ans[0] = 1;
        for (int i = 1; i <= (rowIndex >> 1); i++)
            ans[i] = (int)((long long)ans[i - 1] * (long long)(rowIndex + 1 - i) / (long long)i);
        for (int i = (rowIndex >> 1) + 1; i <= rowIndex; i++)
            ans[i] = ans[rowIndex - i];
        return ans;
    }
};
