/**************************************821 - �ַ�����̾���*************************************

����һ���ַ��� S ��һ���ַ� C������һ�������ַ��� S ��ÿ���ַ����ַ��� S �е��ַ� C ����̾�������顣

ʾ�� 1:

����: S = "loveleetcode", C = 'e'
���: [3, 2, 1, 0, 1, 0, 0, 1, 2, 2, 1, 0]

˵��:

�ַ��� S �ĳ��ȷ�ΧΪ [1, 10000]��
C ��һ�����ַ����ұ�֤���ַ��� S ����ַ���
S �� C �е�������ĸ��ΪСд��ĸ��
*****************************************************************************************************/

//����ɨ���ַ���S����¼S��C�ĳ���λ��

//Ȼ����ݳ���λ�÷ֶΣ�Ȼ��ֶ���ֵ

class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int len = S.length();
        vector<int> ans(len);
        vector<int> pos;
        for (int i = 0; i < len; i++)
        {
            if (S[i] == C)
            {
                ans[i] = 0;
                pos.push_back(i);
            }
        }
        int pos_len = pos.size();
        for (int i = 0; i < pos[0]; i++)
            ans[i] = pos[0] - i;
        for (int i = pos.back() + 1; i < len; i++)
            ans[i] = i - pos.back();
        for (int flag = 0; flag < pos_len - 1; flag++)
        {
            int start = pos[flag];
            int finish = pos[flag + 1];
            int middle = (start + finish) >> 1;
            for (int i = start + 1; i <= middle; i++)
                ans[i] = i - start;
            for (int i = middle + 1; i < finish; i++)
                ans[i] = finish - i;
        }
        return ans;
    }
};
