/**************************************125 - 验证回文串*************************************

给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。

说明：本题中，我们将空字符串定义为有效的回文串。

示例 1:

输入: "A man, a plan, a canal: Panama"
输出: true

示例 2:

输入: "race a car"
输出: false
*****************************************************************************************************/

//按照定义判断即可

class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.length();
        int i = 0;
        int j = len - 1;
        while (i < j)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
            else if (s[i] >= 'A' && s[i] <= 'Z');
            else if (s[i] >= '0' && s[i] <= '9');
            else
            {
                i++;
                continue;
            }
            if (s[j] >= 'a' && s[j] <= 'z')
                s[j] = s[j] - 32;
            else if (s[j] >= 'A' && s[j] <= 'Z');
            else if (s[j] >= '0' && s[j] <= '9');
            else
            {
                j--;
                continue;
            }
            if (s[i] != s[j])
                return false;
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};
