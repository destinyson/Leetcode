/**************************************204 - 计数质数*************************************

统计所有小于非负整数 n 的质数的数量。

示例:

输入: 10
输出: 4
解释: 小于 10 的质数一共有 4 个, 它们是 2, 3, 5, 7 。
*****************************************************************************************************/

//筛法

class Solution {
public:
    int countPrimes(int n) {
        if (n < 3)
            return 0;
        vector<bool> prime(n, true);
        int flag = 2;
        while (flag < sqrt(n))
        {
            for (int i = flag; i <= (n - 1) / flag; i++)
                prime[i * flag] = false;
            flag++;
            while (!prime[flag])
                flag++;
        }
        int ans = 0;
        for (int i = 2; i < n; i++)
        {
            if (prime[i])
                ans++;
        }
        return ans;
    }
};
