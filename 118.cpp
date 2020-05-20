/**************************************118 - �������*************************************

����һ���Ǹ����� numRows������������ǵ�ǰ numRows �С�

����������У�ÿ�����������Ϸ������Ϸ������ĺ͡�

ʾ��:

����: 5
���:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
*****************************************************************************************************/

//����������Ƕ��幹�켴��

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if (numRows == 0)
            return ans;
        vector<int> temp(1);
        temp[0] = 1;
        ans.push_back(temp);
        if (numRows == 1)
            return ans;
        temp.push_back(1);
        ans.push_back(temp);
        if (numRows == 2)
            return ans;
        for (int i = 2; i < numRows; i++)
        {
            vector<int> temp(i + 1);
            temp[0] = 1;
            temp[i] = 1;
            for (int j = 1; j < i; j++)
                temp[j] = ans[i - 1][j] + ans[i - 1][j - 1];
            ans.push_back(temp);
        }
        return ans;
    }
};
