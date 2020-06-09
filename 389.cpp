/**************************************389 - 找不同*************************************

给定两个字符串 s 和 t，它们只包含小写字母。

字符串 t 由字符串 s 随机重排，然后在随机位置添加一个字母。

请找出在 t 中被添加的字母。


示例:

输入：
s = "abcd"
t = "abcde"

输出：
e

解释：
'e' 是那个被添加的字母。
*****************************************************************************************************/

//统计量字符串字幕出现次数，差值为1的就是加进去的字符

class Solution {
public:
    char findTheDifference(string s, string t) {
        int times[26] = {0};
        int len = s.length();
        for (int i = 0; i <= len; i++)
            times[(int)t[i] - 97]++;
        for (int i = 0; i < len; i++)
            times[(int)s[i] - 97]--;
        for (int i = 0; i < 26; i++)
        {
            if (times[i])
                return (char)(i + 97);
        }
        return '$';
    }
};
