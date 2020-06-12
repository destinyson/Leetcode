/**************************************1128 - �ȼ۶���ŵ���ƶԵ�����*************************************

����һ����һЩ����ŵ������ɵ��б� dominoes��

�������ĳһ�Ŷ���ŵ���ƿ���ͨ����ת 0 �Ȼ� 180 �ȵõ���һ�Ŷ���ŵ���ƣ����Ǿ���Ϊ���������ǵȼ۵ġ�

��ʽ�ϣ�dominoes[i] = [a, b] �� dominoes[j] = [c, d] �ȼ۵�ǰ���� a==c �� b==d������ a==d �� b==c��

�� 0 <= i < j < dominoes.length ��ǰ���£��ҳ����� dominoes[i] �� dominoes[j] �ȼ۵Ĺ��ƶ� (i, j) ��������


ʾ����

���룺dominoes = [[1,2],[2,1],[3,4],[5,6]]
�����1


��ʾ��

1 <= dominoes.length <= 40000
1 <= dominoes[i][j] <= 9
*****************************************************************************************************/

//����Τ�ﶨ����������������Թ�ͬΨһȷ����������˳����Բ�һ�£�

//�����ڹ���Ԫ�ؾ���1~9��Χ�ڣ��˻������81�����82*��+������Ψһȷ�������

//Ҳ����˵����������Ƶȼۣ���ô82*��+����ֵһ������ȵ�

//�������������־ֵ������map�洢ÿ����־ֵ�Ĵ�����֮�����map�����ô�������ȼ۹��ƶ���

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<int, int> m;
        int num = dominoes.size();
        for (int i = 0; i < num; i++)
        {
            int flag = 82 * (dominoes[i][0] + dominoes[i][1]) + dominoes[i][0] * dominoes[i][1];
            if (m.find(flag) != m.end())
                m[flag]++;
            else
                m[flag] = 1;
        }
        int ans = 0;
        for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
            ans = ans + it->second * (it->second - 1) / 2;
        return ans;
    }
};
