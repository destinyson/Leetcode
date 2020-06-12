/**************************************415 - �ַ������*************************************

���������ַ�����ʽ�ķǸ����� num1 ��num2 ���������ǵĺ͡�

ע�⣺

num1 ��num2 �ĳ��ȶ�С�� 5100.
num1 ��num2 ��ֻ�������� 0-9.
num1 ��num2 ���������κ�ǰ���㡣
�㲻��ʹ���κ΃Ƚ� BigInteger �⣬ Ҳ����ֱ�ӽ�������ַ���ת��Ϊ������ʽ��
*****************************************************************************************************/

//ģ�����

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
