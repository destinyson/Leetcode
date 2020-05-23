/**************************************面试题 01.04. 回文排列*************************************

给定一个字符串，编写一个函数判定其是否为某个回文串的排列之一。

回文串是指正反两个方向都一样的单词或短语。排列是指字母的重新排列。

回文串不一定是字典当中的单词。



示例1：

输入："tactcoa"
输出：true（排列有"tacocat"、"atcocta"，等等）
*****************************************************************************************************/

//由于回文串是关于字符串中心对称的

//因此若一个字符串是回文串的重排列，则回文串最多有一个字符出现奇数次，其余所有字符一定出现偶数次

class Solution {
public:
    bool canPermutePalindrome(string s) {
        int len = s.length();
        int times[128] = {0};
        for (int i = 0; i < len; i++)
            times[(int)s[i]]++;
        bool chance = true;
        for (int i = 0; i < 128; i++)
        {
            if (times[i] % 2)
            {
                if (chance)
                    chance = false;
                else
                    return false;
            }
        }
        return true;
    }
};
