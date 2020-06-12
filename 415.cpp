/**************************************415 - 字符串相加*************************************

给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和。

注意：

num1 和num2 的长度都小于 5100.
num1 和num2 都只包含数字 0-9.
num1 和num2 都不包含任何前导零。
你不能使用任何內建 BigInteger 库， 也不能直接将输入的字符串转换为整数形式。
*****************************************************************************************************/

//模拟笔算

class Solution {
public:
    string addStrings(string num1, string num2) {
        if (num1 == "0" && num2 == "0")
            return "0";
        int len1 = num1.length();
        int len2 = num2.length();
        int len = len1 > len2 ? len1 : len2;
        if (len1 > len2)
            num2.insert(0, len1 - len2, '0');
        else
            num1.insert(0, len2 - len1, '0');
        string ans(len, '0');
        bool carry = false;
        for (int i = len - 1; i >= 0; i--)
        {
            int temp = num1[i] + num2[i] - 96;
            if (carry)
                temp++;
            carry = temp > 9 ? true : false;
            if (temp > 9)
                temp = temp - 10;
            ans[i] = (char)(temp + 48);
        }
        if (carry)
            ans.insert(0, 1, '1');
        return ans;
    }
};
