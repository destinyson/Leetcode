/**************************************482 - ��Կ��ʽ��*************************************

��һ����Կ�ַ��� S ��ֻ������ĸ�������Լ� '-'�����ۺţ������У� N �� '-' ���ַ����ֳ��� N+1 �顣

����һ������ K���������¸�ʽ���ַ��������˵�һ���������⣬ÿ������Ҫ���� K ���ַ�������һ�������У�����Ҫ���� 1 ���ַ�����������֮����Ҫ�� '-'�����ۺţ����������ҽ����е�Сд��ĸת��Ϊ��д��ĸ��

�����ǿ��ַ��� S ������ K���������������Ĺ�����и�ʽ����



ʾ�� 1��

���룺S = "5F3Z-2e-9-w", K = 4
�����"5F3Z-2E9W"
���ͣ��ַ��� S ���ֳ����������֣�ÿ���� 4 ���ַ���
     ע�⣬������������ۺ���Ҫɾ����

ʾ�� 2��

���룺S = "2-5g-3-J", K = 2
�����"2-5G-3J"
���ͣ��ַ��� S ���ֳ��� 3 �����֣�����ǰ��Ĺ�����������һ���ֵ��ַ��������ڸ��������������ಿ�ֽ�Ϊ 2 ���ַ���


��ʾ:

S �ĳ��ȿ��ܺܳ����밴������С��K Ϊ��������
S ֻ������ĸ���֣�a-z��A-Z��0-9���Լ����ۺ�'-'
S �ǿ�
*****************************************************************************************************/

//��Ȼ��һ�������ַ���������С��K����ôѡ�����������

class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        int len = S.length();
        string ans = "";
        int flag = 0;
        for (int i = len - 1; i >= 0; i--)
        {
            if (S[i] != '-')
            {
                if (flag == K)
                {
                    ans.insert(0, 1, '-');
                    flag = 0;
                }
                if (S[i] >= 'a' && S[i] <= 'z')
                    S[i] = S[i] - 32;
                ans.insert(0, 1, S[i]);
                flag++;
            }
        }
        return ans;
    }
};