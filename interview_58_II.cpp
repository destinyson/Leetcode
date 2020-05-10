/**************************************������58 - II. ����ת�ַ���*************************************

�ַ���������ת�����ǰ��ַ���ǰ������ɸ��ַ�ת�Ƶ��ַ�����β�����붨��һ������ʵ���ַ�������ת�����Ĺ��ܡ����磬�����ַ���"abcdefg"������2���ú�������������ת��λ�õ��Ľ��"cdefgab"��


ʾ�� 1��

����: s = "abcdefg", k = 2
���: "cdefgab"
ʾ�� 2��

����: s = "lrloseumgh", k = 6
���: "umghlrlose"


���ƣ�

1 <= k < s.length <= 10000
*****************************************************************************************************/

//���ַ����г����Σ����ú�ƴ�ӣ�����������

class Solution {
public:
    string reverseLeftWords(string s, int n) {
        int len = s.length();
        string str1 = s.substr(0, n);
        string str2 = s.substr(n, len - n);
        reverse(str1.begin(), str1.end());
        reverse(str2.begin(), str2.end());
        string ans = str1 + str2;
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
