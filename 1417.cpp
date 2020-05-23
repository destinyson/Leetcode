/**************************************1417 - 重新格式化字符串*************************************

给你一个混合了数字和字母的字符串 s，其中的字母均为小写英文字母。

请你将该字符串重新格式化，使得任意两个相邻字符的类型都不同。也就是说，字母后面应该跟着数字，而数字后面应该跟着字母。

请你返回 重新格式化后 的字符串；如果无法按要求重新格式化，则返回一个 空字符串 。



示例 1：

输入：s = "a0b1c2"
输出："0a1b2c"
解释："0a1b2c" 中任意两个相邻字符的类型都不同。 "a0b1c2", "0a1b2c", "0c2a1b" 也是满足题目要求的答案。

示例 2：

输入：s = "leetcode"
输出：""
解释："leetcode" 中只有字母，所以无法满足重新格式化的条件。

示例 3：

输入：s = "1229857369"
输出：""
解释："1229857369" 中只有数字，所以无法满足重新格式化的条件。

示例 4：

输入：s = "covid2019"
输出："c2o0v1i9d"

示例 5：

输入：s = "ab123"
输出："1a2b3"


提示：

1 <= s.length <= 500
s 仅由小写英文字母和/或数字组成。
*****************************************************************************************************/

//首先统计字符串中数字和字母

//如果两者个数差距大于1，则字符串绝对无法重新格式化

//反之，采用双指针，从两者之中轮流取字符来构造格式化字符串

class Solution {
public:
    string reformat(string s) {
        vector<char> num;
        vector<char> letter;
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
                num.push_back(s[i]);
            else if (s[i] >= 'a' && s[i] <= 'z')
                letter.push_back(s[i]);
        }
        int num_len = num.size();
        int letter_len = letter.size();
        if (num_len - letter_len < -1 || num_len - letter_len > 1)
            return "";
        else
        {
            int i = 0;
            int j = 0;
            int pos = 0;
            if (num_len > letter_len)
            {
                while (j < letter_len)
                {
                    s[pos++] = num[i++];
                    s[pos++] = letter[j++];
                }
                s[pos] = num[i];
            }
            else
            {
                while (i < num_len)
                {
                    s[pos++] = letter[j++];
                    s[pos++] = num[i++];
                }
                if (j < letter_len)
                    s[pos] = letter[j];
            }
            return s;
        }
    }
};
