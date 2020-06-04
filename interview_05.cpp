/**************************************面试题05. 替换空格*************************************

请实现一个函数，把字符串 s 中的每个空格替换成"%20"。


示例 1：

输入：s = "We are happy."
输出："We%20are%20happy."


限制：

0 <= s 的长度 <= 10000
*****************************************************************************************************/

//结果字符串最长为参数字符串长度的三倍，对应参数字符串中全是空格的情况

//遍历扫描参数字符串，根据是否为空格对结果字符串赋值

class Solution {
public:
    string replaceSpace(string s) {
        int len = s.length();
        string ans(3 * len, '#');
        int pos = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == ' ')
            {
                ans[pos++] = '%';
                ans[pos++] = '2';
                ans[pos++] = '0';
            }
            else
                ans[pos++] = s[i];
        }
        return ans.substr(0, pos);
    }
};
