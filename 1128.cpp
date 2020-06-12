/**************************************1128 - 等价多米诺骨牌对的数量*************************************

给你一个由一些多米诺骨牌组成的列表 dominoes。

如果其中某一张多米诺骨牌可以通过旋转 0 度或 180 度得到另一张多米诺骨牌，我们就认为这两张牌是等价的。

形式上，dominoes[i] = [a, b] 和 dominoes[j] = [c, d] 等价的前提是 a==c 且 b==d，或是 a==d 且 b==c。

在 0 <= i < j < dominoes.length 的前提下，找出满足 dominoes[i] 和 dominoes[j] 等价的骨牌对 (i, j) 的数量。


示例：

输入：dominoes = [[1,2],[2,1],[3,4],[5,6]]
输出：1


提示：

1 <= dominoes.length <= 40000
1 <= dominoes[i][j] <= 9
*****************************************************************************************************/

//根据韦达定理，两个数和与积可以共同唯一确定两个数（顺序可以不一致）

//而由于骨牌元素均在1~9范围内，乘积最大是81，因此82*和+积可以唯一确定和与积

//也就是说，如果两骨牌等价，那么82*和+积的值一定是相等的

//遍历计算这个标志值，利用map存储每个标志值的次数，之后遍历map，利用次数计算等价骨牌对数

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<int, int> m;
        int num = dominoes.size();
        for (int i = 0; i < num; i++)
        {
            int flag = 82 * (dominoes[i][0] + dominoes[i][1]) + dominoes[i][0] * dominoes[i][1];
            if (m.find(flag) != m.end())
                m[flag]++;
            else
                m[flag] = 1;
        }
        int ans = 0;
        for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
            ans = ans + it->second * (it->second - 1) / 2;
        return ans;
    }
};
