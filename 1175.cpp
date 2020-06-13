/**************************************1175 - ��������*************************************

�����æ���� 1 �� n ����������з�����ʹ�����еġ���������Ӧ�ñ����ڡ������������������� 1 ��ʼ���ϣ�����Ҫ���ؿ��ܵķ���������

������һ�����ع�һ�¡�������������һ���Ǵ��� 1 �ģ����Ҳ���������С�������������ĳ˻�����ʾ��

���ڴ𰸿��ܻ�ܴ��������㷵�ش� ģ mod 10^9 + 7 ֮��Ľ�����ɡ�


ʾ�� 1��

���룺n = 5
�����12
���ͣ��ٸ����ӣ�[1,2,5,4,3] ��һ����Ч�����У��� [5,2,3,4,1] ���ǣ���Ϊ�ڵڶ������������ 5 ������ط�������Ϊ 1 ��λ���ϡ�

ʾ�� 2��

���룺n = 100
�����682289015


��ʾ��

1 <= n <= 100
*****************************************************************************************************/

//���Ϊ���������Ľ׳�������������Ľ׳˵ĳ˻�

//��Ȼ�ֶ�ɸ���ᳬʱ�����Ǿ����Լ���������������

class Solution {
public:
    int numPrimeArrangements(int n) {
        vector<int> griddle(101);
        for (int i = 2; i < 3; i++)
            griddle[i] = 1;
        for (int i = 3; i < 5; i++)
            griddle[i] = 2;
        for (int i = 5; i < 7; i++)
            griddle[i] = 3;
        for (int i = 7; i < 11; i++)
            griddle[i] = 4;
        for (int i = 11; i < 13; i++)
            griddle[i] = 5;
        for (int i = 13; i < 17; i++)
            griddle[i] = 6;
        for (int i = 17; i < 19; i++)
            griddle[i] = 7;
        for (int i = 19; i < 23; i++)
            griddle[i] = 8;
        for (int i = 23; i < 29; i++)
            griddle[i] = 9;
        for (int i = 29; i < 31; i++)
            griddle[i] = 10;
        for (int i = 31; i < 37; i++)
            griddle[i] = 11;
        for (int i = 37; i < 41; i++)
            griddle[i] = 12;
        for (int i = 41; i < 43; i++)
            griddle[i] = 13;
        for (int i = 43; i < 47; i++)
            griddle[i] = 14;
        for (int i = 47; i < 53; i++)
            griddle[i] = 15;
        for (int i = 53; i < 59; i++)
            griddle[i] = 16;
        for (int i = 59; i < 61; i++)
            griddle[i] = 17;
        for (int i = 61; i < 67; i++)
            griddle[i] = 18;
        for (int i = 67; i < 71; i++)
            griddle[i] = 19;
        for (int i = 71; i < 73; i++)
            griddle[i] = 20;
        for (int i = 73; i < 79; i++)
            griddle[i] = 21;
        for (int i = 79; i < 83; i++)
            griddle[i] = 22;
        for (int i = 83; i < 89; i++)
            griddle[i] = 23;
        for (int i = 89; i < 97; i++)
            griddle[i] = 24;
        for (int i = 97; i < 101; i++)
            griddle[i] = 25;
        int prime = griddle[n];
        int non_prime = n - prime;
        long long ans = 1;
        while (prime)
        {
            ans = (ans * (long long)prime) % 1000000007;
            prime--;
        }
        while (non_prime)
        {
            ans = (ans * (long long)non_prime) % 1000000007;
            non_prime--;
        }
        return ans;
    }
};
