/**************************************771 - 宝石与石头*************************************

给定字符串J 代表石头中宝石的类型，和字符串 S代表你拥有的石头。 S 中每个字符代表了一种你拥有的石头的类型，你想知道你拥有的石头中有多少是宝石。

J 中的字母不重复，J 和 S中的所有字符都是字母。字母区分大小写，因此"a"和"A"是不同类型的石头。

示例 1:

输入: J = "aA", S = "aAAbbbb"
输出: 3
示例 2:

输入: J = "z", S = "ZZ"
输出: 0
注意:

S 和 J 最多含有50个字母。
J 中的字符不重复。
*****************************************************************************************************/

//设定bool型数组jewel判断52种石头是否为宝石，扫描字符串J进行判断

//之后扫描字符串S，检查每个字符对应的石头是否为宝石

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool jewel[52] = {false};
        int jlen = J.length();
        for (int i = 0; i < jlen; i++)
        {
            if (J[i] >= 'A' && J[i] <= 'Z')
                jewel[(int)J[i] - 65] = true;
            else if (J[i] >= 'a' && J[i] <= 'z')
                jewel[(int)J[i] - 71] = true;
        }
        int ans = 0;
        int slen = S.length();
        for (int i = 0; i < slen; i++)
        {
            if (S[i] >= 'A' && S[i] <= 'Z' && jewel[(int)S[i] - 65])
                ans++;
            else if (S[i] >= 'a' && S[i] <= 'z' && jewel[(int)S[i] - 71])
                ans++;
        }
        return ans;
    }
};
