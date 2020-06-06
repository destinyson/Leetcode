/**************************************520 - ����д��ĸ*************************************

����һ�����ʣ�����Ҫ�жϵ��ʵĴ�дʹ���Ƿ���ȷ��

���Ƕ��壬���������ʱ�����ʵĴ�д�÷�����ȷ�ģ�

ȫ����ĸ���Ǵ�д������"USA"��
������������ĸ�����Ǵ�д������"leetcode"��
������ʲ�ֻ����һ����ĸ��ֻ������ĸ��д�� ���� "Google"��
�������Ƕ����������û����ȷʹ�ô�д��ĸ��

ʾ�� 1:

����: "USA"
���: True

ʾ�� 2:

����: "FlaG"
���: False

ע��: �������ɴ�д��Сд������ĸ��ɵķǿյ��ʡ�
*****************************************************************************************************/

//DFA��������ĸ�������״̬Ǩ��

class Solution {
public:
    bool detectCapitalUse(string word) {
        int turn = 1;
        int len = word.length();
        if (len == 1)
            return true;
        for (int i = 0; i < len; i++)
        {
            switch(turn)
            {
                case 1:
                {
                    if (word[i] >= 'a' && word[i] <= 'z')
                        turn = 2;
                    else if (word[i] >= 'A' && word[i] <= 'Z')
                        turn = 3;
                    break;
                }
                case 2:
                {
                    if (word[i] >= 'a' && word[i] <= 'z')
                        turn = 2;
                    else if (word[i] >= 'A' && word[i] <= 'Z')
                        return false;
                    break;
                }
                case 3:
                {
                    if (word[i] >= 'a' && word[i] <= 'z')
                        turn = 4;
                    else if (word[i] >= 'A' && word[i] <= 'Z')
                        turn = 5;
                    break;
                }
                case 4:
                {
                    if (word[i] >= 'a' && word[i] <= 'z')
                        turn = 4;
                    else if (word[i] >= 'A' && word[i] <= 'Z')
                        return false;
                    break;
                }
                case 5:
                {
                    if (word[i] >= 'a' && word[i] <= 'z')
                        return false;
                    else if (word[i] >= 'A' && word[i] <= 'Z')
                        turn = 5;
                    break;
                }
                default:break;
            }
        }
        return true;
    }
};
