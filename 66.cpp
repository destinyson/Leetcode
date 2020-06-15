/**************************************66 - ��һ*************************************

����һ����������ɵķǿ���������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��

���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�

����Լ���������� 0 ֮�⣬��������������㿪ͷ��

ʾ�� 1:

����: [1,2,3]
���: [1,2,4]
����: ���������ʾ���� 123��

ʾ�� 2:

����: [4,3,2,1]
���: [4,3,2,2]
����: ���������ʾ���� 4321��
*****************************************************************************************************/

//ģ�����

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int len = digits.size();
        for (int i = len - 1; i >= 0; i--)
        {
            int temp = digits[i] + carry;
            if (temp == 10)
            {
                digits[i] = 0;
                carry = 1;
            }
            else
            {
                digits[i] = temp;
                carry = 0;
            }
            if (!carry)
                break;
        }
        if (carry)
            digits.insert(digits.begin(), 1, 1);
        return digits;
    }
};