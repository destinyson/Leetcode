/**************************************面试题 01.02. 判定是否互为字符重排*************************************

给定两个字符串 s1 和 s2，请编写一个程序，确定其中一个字符串的字符重新排列后，能否变成另一个字符串。

示例 1：

输入: s1 = "abc", s2 = "bca"
输出: true
示例 2：

输入: s1 = "abc", s2 = "bad"
输出: false
说明：

0 <= len(s1) <= 100
0 <= len(s2) <= 100
*****************************************************************************************************/

//如果两个字符串互为重排，那么两个字符串各个不同字符出现的次数一样，故出现次数差值为0

//用差值判断可以省下一个整型数组的空间

class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        int len1 = s1.length();
        int len2 = s2.length();
        if (len1 != len2)
            return false;
        else
        {
            int times[26] = {0};
            for (int i = 0; i < len1; i++)
                times[(int)s1[i] - 97]++;
            for (int i = 0; i < len2; i++)
                times[(int)s2[i] - 97]--;
            for (int i = 0; i < 26; i++)
            {
                if (times[i])
                    return false;
            }
            return true;
        }
    }
};
