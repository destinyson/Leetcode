/**************************************������32 - II ���ϵ��´�ӡ������ II*************************************

���ϵ��°����ӡ��������ͬһ��Ľڵ㰴�����ҵ�˳���ӡ��ÿһ���ӡ��һ�С�



����:
����������: [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
�������α��������

[
  [3],
  [9,20],
  [15,7]
]


��ʾ��

�ڵ����� <= 1000
*****************************************************************************************************/

//�������Ĳ��������ע��������������

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > ans;
        if (!root)
            return ans;
        else
        {
            TreeNode* p = root;
            vector<TreeNode*> floor;
            vector<int> temp;
            floor.push_back(root);
            temp.push_back(root->val);
            while (floor.size())
            {
                ans.push_back(temp);
                int num = floor.size();
                while (num--)
                {
                    if (floor[0]->left)
                    {
                        floor.push_back(floor[0]->left);
                        temp.push_back(floor[0]->left->val);
                    }
                    if (floor[0]->right)
                    {
                        floor.push_back(floor[0]->right);
                        temp.push_back(floor[0]->right->val);
                    }
                    floor.erase(floor.begin());
                    temp.erase(temp.begin());
                }
            }
            return ans;
        }
    }
};
