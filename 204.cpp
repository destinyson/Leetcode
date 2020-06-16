/**************************************204 - ��������*************************************

ͳ������С�ڷǸ����� n ��������������

ʾ��:

����: 10
���: 4
����: С�� 10 ������һ���� 4 ��, ������ 2, 3, 5, 7 ��
*****************************************************************************************************/

//ɸ��

class Solution {
public:
    int countPrimes(int n) {
        if (n < 3)
            return 0;
        vector<bool> prime(n, true);
        int flag = 2;
        while (flag < sqrt(n))
        {
            for (int i = flag; i <= (n - 1) / flag; i++)
                prime[i * flag] = false;
            flag++;
            while (!prime[flag])
                flag++;
        }
        int ans = 0;
        for (int i = 2; i < n; i++)
        {
            if (prime[i])
                ans++;
        }
        return ans;
    }
};
