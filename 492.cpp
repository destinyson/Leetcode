/**************************************492 - �������*************************************

��Ϊһλweb�����ߣ� ��������ȥ�滮һ��ҳ��ĳߴ��Ǻ���Ҫ�ġ� �ָ���һ������ľ���ҳ�������������������һ������Ϊ L �Ϳ���Ϊ W ����������Ҫ��ľ��ε�ҳ�档Ҫ��

1. ����Ƶľ���ҳ�������ڸ�����Ŀ�������

2. ���� W ��Ӧ���ڳ��� L������֮��Ҫ�� L >= W ��

3. ���� L �Ϳ��� W ֮��Ĳ��Ӧ��������С��
����Ҫ��˳���������Ƶ�ҳ��ĳ��� L �Ϳ��� W��

ʾ����

����: 4
���: [2, 2]
����: Ŀ������� 4�� ���п��ܵĹ��췽���� [1,4], [2,2], [4,1]��
���Ǹ���Ҫ��2��[1,4] ������Ҫ��; ����Ҫ��3��[2,2] �� [4,1] ���ܷ���Ҫ��. ����������� L Ϊ 2�� ���� W Ϊ 2��

˵��:

��������������� 10,000,000 ��Ϊ��������
����Ƶ�ҳ��ĳ��ȺͿ��ȱ��붼����������
*****************************************************************************************************/

//���Ϳ�Խ�ӽ����ƽ��������ֵԽС

//��ֵȡ���ƽ����ȡ�����ݼ���������

class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans(2);
        ans[1] = (int)sqrt(area);
        while (ans[1])
        {
            if (area % ans[1] == 0)
            {
                ans[0] = area / ans[1];
                break;
            }
            ans[1]--;
        }
        return ans;
    }
};