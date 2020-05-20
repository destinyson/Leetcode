/**************************************67 - 二进制求和*************************************

给你两个二进制字符串，返回它们的和（用二进制表示）。

输入为 非空 字符串且只包含数字 1 和 0。



示例 1:

输入: a = "11", b = "1"
输出: "100"

示例 2:

输入: a = "1010", b = "1011"
输出: "10101"


提示：

每个字符串仅由字符 '0' 或 '1' 组成。
1 <= a.length, b.length <= 10^4
字符串如果不是 "0" ，就都不含前导零。
*****************************************************************************************************/

//首先将字符串尾部对齐，前面填0补齐

//模拟笔算，可以利用真值表得出逻辑关系，逐位利用位运算实现二进制加法

class Solution {
public:
    string addBinary(string a, string b) {
        int alen = a.length();
        int blen = b.length();
        int len = alen > blen ? alen : blen;
        string zero(abs(alen - blen), '0');
        if (alen < blen)
            a = zero + a;
        else
            b = zero + b;
        int charge = 0;
        string ans(len, '0');
        for (int i = len - 1; i >= 0; i--)
        {
            int da = (int)a[i] - 48;
            int db = (int)b[i] - 48;
            ans[i] = (char)(((da & (!db) & (!charge)) | ((!da) & db & (!charge)) | ((!da) & (!db) & charge) | (da & db & charge)) + 48);
            charge = (da & db) | (da & charge) | (charge & db);
        }

        if (charge)
            ans = "1" + ans;
        return ans;
    }
};
