/**************************************9 - ������*************************************

�ж�һ�������Ƿ��ǻ���������������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������

ʾ�� 1:

����: 121
���: true
ʾ�� 2:

����: -121
���: false
����: �������Ҷ�, Ϊ -121 �� ���������, Ϊ 121- �����������һ����������
ʾ�� 3:

����: 10
���: false
����: ���������, Ϊ 01 �����������һ����������
����:

���ܲ�������תΪ�ַ�����������������
*****************************************************************************************************/

//������ת���Ƚ��뷴תǰ�Ƿ���ͬ

//ע��int��ת�ᱬ��Χ������long long

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        else
        {
            long long temp = x;
            long long rev = 0;
            while (temp)
            {
                rev = rev * 10 + (temp % 10);
                temp = temp / 10;
            }
            return rev == x;
        }
    }
};