/**************************************917 - 仅仅反转字母*************************************

给定一个字符串 S，返回 “反转后的” 字符串，其中不是字母的字符都保留在原地，而所有字母的位置发生反转。



示例 1：

输入："ab-cd"
输出："dc-ba"

示例 2：

输入："a-bC-dEf-ghIj"
输出："j-Ih-gfE-dCba"

示例 3：

输入："Test1ng-Leet=code-Q!"
输出："Qedo1ct-eeLg=ntse-T!"


提示：

S.length <= 100
33 <= S[i].ASCIIcode <= 122
S 中不包含 \ or "
*****************************************************************************************************/

//定义两个向量，分别记录字母与对应位置

//之后反转字母向量，并根据其与对应位置修改字符串

class Solution {
public:
    string reverseOnlyLetters(string S) {
        vector<char> c;
        vector<int> pos;
        int len = S.length();
        for (int i = 0; i < len; i++)
        {
            if ((S[i] >= 'A' && S[i] <= 'Z') || (S[i] >= 'a' && S[i] <= 'z'))
            {
                c.push_back(S[i]);
                pos.push_back(i);
            }
        }
        reverse(c.begin(), c.end());
        int num = pos.size();
        for (int i = 0; i < num; i++)
            S[pos[i]] = c[i];
        return S;
    }
};
