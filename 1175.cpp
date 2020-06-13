/**************************************1175 - 质数排列*************************************

请你帮忙给从 1 到 n 的数设计排列方案，使得所有的「质数」都应该被放在「质数索引」（索引从 1 开始）上；你需要返回可能的方案总数。

让我们一起来回顾一下「质数」：质数一定是大于 1 的，并且不能用两个小于它的正整数的乘积来表示。

由于答案可能会很大，所以请你返回答案 模 mod 10^9 + 7 之后的结果即可。


示例 1：

输入：n = 5
输出：12
解释：举个例子，[1,2,5,4,3] 是一个有效的排列，但 [5,2,3,4,1] 不是，因为在第二种情况里质数 5 被错误地放在索引为 1 的位置上。

示例 2：

输入：n = 100
输出：682289015


提示：

1 <= n <= 100
*****************************************************************************************************/

//结果为质数个数的阶乘与非质数个数的阶乘的乘积

//既然手动筛法会超时……那就人脑计算质数个数好了

class Solution {
public:
    int numPrimeArrangements(int n) {
        vector<int> griddle(101);
        for (int i = 2; i < 3; i++)
            griddle[i] = 1;
        for (int i = 3; i < 5; i++)
            griddle[i] = 2;
        for (int i = 5; i < 7; i++)
            griddle[i] = 3;
        for (int i = 7; i < 11; i++)
            griddle[i] = 4;
        for (int i = 11; i < 13; i++)
            griddle[i] = 5;
        for (int i = 13; i < 17; i++)
            griddle[i] = 6;
        for (int i = 17; i < 19; i++)
            griddle[i] = 7;
        for (int i = 19; i < 23; i++)
            griddle[i] = 8;
        for (int i = 23; i < 29; i++)
            griddle[i] = 9;
        for (int i = 29; i < 31; i++)
            griddle[i] = 10;
        for (int i = 31; i < 37; i++)
            griddle[i] = 11;
        for (int i = 37; i < 41; i++)
            griddle[i] = 12;
        for (int i = 41; i < 43; i++)
            griddle[i] = 13;
        for (int i = 43; i < 47; i++)
            griddle[i] = 14;
        for (int i = 47; i < 53; i++)
            griddle[i] = 15;
        for (int i = 53; i < 59; i++)
            griddle[i] = 16;
        for (int i = 59; i < 61; i++)
            griddle[i] = 17;
        for (int i = 61; i < 67; i++)
            griddle[i] = 18;
        for (int i = 67; i < 71; i++)
            griddle[i] = 19;
        for (int i = 71; i < 73; i++)
            griddle[i] = 20;
        for (int i = 73; i < 79; i++)
            griddle[i] = 21;
        for (int i = 79; i < 83; i++)
            griddle[i] = 22;
        for (int i = 83; i < 89; i++)
            griddle[i] = 23;
        for (int i = 89; i < 97; i++)
            griddle[i] = 24;
        for (int i = 97; i < 101; i++)
            griddle[i] = 25;
        int prime = griddle[n];
        int non_prime = n - prime;
        long long ans = 1;
        while (prime)
        {
            ans = (ans * (long long)prime) % 1000000007;
            prime--;
        }
        while (non_prime)
        {
            ans = (ans * (long long)non_prime) % 1000000007;
            non_prime--;
        }
        return ans;
    }
};
