/**************************************637 - �������Ĳ�ƽ��ֵ*************************************

����һ���ǿն�����, ����һ����ÿ��ڵ�ƽ��ֵ��ɵ�����.

ʾ�� 1:

����:
    3
   / \
  9  20
    /  \
   15   7
���: [3, 14.5, 11]
����:
��0���ƽ��ֵ�� 3,  ��1���� 14.5, ��2���� 11. ��˷��� [3, 14.5, 11].

ע�⣺

�ڵ�ֵ�ķ�Χ��32λ�з���������Χ�ڡ�
*****************************************************************************************************/

//��������������������ƽ��ֵ����

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<TreeNode*> v;
        vector<double> ans;
        v.push_back(root);
        ans.push_back(root->val);
        while (v.size())
        {
            double temp = 0;
            int num = v.size();
            while (num--)
            {
                if (v[0]->left)
                {
                    v.push_back(v[0]->left);
                    temp = temp + v[0]->left->val;
                }
                if (v[0]->right)
                {
                    v.push_back(v[0]->right);
                    temp = temp + v[0]->right->val;
                }
                v.erase(v.begin());
            }
            if (v.size())
                ans.push_back(temp / (double)v.size());
        }
        return ans;
    }
};
