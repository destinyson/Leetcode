/**************************************面试题 01.01. 判定字符是否唯一*************************************

实现一个算法，确定一个字符串 s 的所有字符是否全都不同。

示例 1：

输入: s = "leetcode"
输出: false
示例 2：

输入: s = "abc"
输出: true
限制：

0 <= len(s) <= 100
如果你不使用额外的数据结构，会很加分。
*****************************************************************************************************/

//此代码要求字符串构成字符为ASCII字符

//设bool型数组纪录某字符是否出现过，遍历字符串，如果某字符出现过则返回false，任一字符都没重复出现过则返回true

class Solution {
public:
    bool isUnique(string astr) {
        bool appear[130] = {false};
        int len = astr.length();
        for (int i = 0; i < len; i++)
        {
            if (appear[(int)astr[i]])
                return false;
            else
                appear[(int)astr[i]] = true;
        }
        return true;
    }
};
