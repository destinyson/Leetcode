/**************************************������57 - II ��Ϊs��������������*************************************

����һ�������� target ��������к�Ϊ target ���������������У����ٺ�������������

�����ڵ�������С�������У���ͬ���а����׸����ִ�С�������С�



ʾ�� 1��

���룺target = 9
�����[[2,3,4],[4,5]]
ʾ�� 2��

���룺target = 15
�����[[1,2,3,4,5],[4,5,6],[7,8]]


���ƣ�

1 <= target <= 10^5
*****************************************************************************************************/

//n�����������ļӺ�sum�����nΪ��������sumһ����n�ı��������nΪż������sum��2��һ����n��������

//��1��ʼ�����������ĸ�����Ϊ������������������

//����ÿһ������������������������λ�������м䣬֮����������չ��ֵ

class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        vector<vector<int>> v;
        int above = (int)((sqrt(8.0 * target + 1.0) - 1.0) / 2.0);
        int temp = target << 1;
        for (int n = above; n > 1; n--)
        {
            if (temp % n == 0)
            {
                vector<int> ans(n);
                if (n % 2)
                {
                    int average = target / n;
                    int middle = n >> 1;
                    ans[middle] = average;
                    for (int i = 1; i <= middle; i++)
                    {
                        ans[middle - i] = average - i;
                        ans[middle + i] = average + i;
                    }
                    v.push_back(ans);
                }
                else if ((temp / n) % 2)
                {
                    int average = (temp / n + 1) >> 1;
                    int middle = n >> 1;
                    ans[middle] = average;
                    for (int i = 1; i <= middle; i++)
                        ans[middle - i] = average - i;
                    for (int i = middle + 1; i < n; i++)
                        ans[i] = average + i - middle;
                    v.push_back(ans);
                }
            }
        }
        return v;
    }
};
