/**************************************917 - ������ת��ĸ*************************************

����һ���ַ��� S������ ����ת��ġ� �ַ��������в�����ĸ���ַ���������ԭ�أ���������ĸ��λ�÷�����ת��



ʾ�� 1��

���룺"ab-cd"
�����"dc-ba"

ʾ�� 2��

���룺"a-bC-dEf-ghIj"
�����"j-Ih-gfE-dCba"

ʾ�� 3��

���룺"Test1ng-Leet=code-Q!"
�����"Qedo1ct-eeLg=ntse-T!"


��ʾ��

S.length <= 100
33 <= S[i].ASCIIcode <= 122
S �в����� \ or "
*****************************************************************************************************/

//���������������ֱ��¼��ĸ���Ӧλ��

//֮��ת��ĸ�����������������Ӧλ���޸��ַ���

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
