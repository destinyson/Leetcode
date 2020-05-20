/**************************************67 - ���������*************************************

���������������ַ������������ǵĺͣ��ö����Ʊ�ʾ����

����Ϊ �ǿ� �ַ�����ֻ�������� 1 �� 0��



ʾ�� 1:

����: a = "11", b = "1"
���: "100"

ʾ�� 2:

����: a = "1010", b = "1011"
���: "10101"


��ʾ��

ÿ���ַ��������ַ� '0' �� '1' ��ɡ�
1 <= a.length, b.length <= 10^4
�ַ���������� "0" ���Ͷ�����ǰ���㡣
*****************************************************************************************************/

//���Ƚ��ַ���β�����룬ǰ����0����

//ģ����㣬����������ֵ��ó��߼���ϵ����λ����λ����ʵ�ֶ����Ƽӷ�

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
