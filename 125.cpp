/**************************************125 - ��֤���Ĵ�*************************************

����һ���ַ�������֤���Ƿ��ǻ��Ĵ���ֻ������ĸ�������ַ������Ժ�����ĸ�Ĵ�Сд��

˵���������У����ǽ����ַ�������Ϊ��Ч�Ļ��Ĵ���

ʾ�� 1:

����: "A man, a plan, a canal: Panama"
���: true

ʾ�� 2:

����: "race a car"
���: false
*****************************************************************************************************/

//���ն����жϼ���

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
