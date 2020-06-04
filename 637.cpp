/**************************************637 - 二叉树的层平均值*************************************

给定一个非空二叉树, 返回一个由每层节点平均值组成的数组.

示例 1:

输入:
    3
   / \
  9  20
    /  \
   15   7
输出: [3, 14.5, 11]
解释:
第0层的平均值是 3,  第1层是 14.5, 第2层是 11. 因此返回 [3, 14.5, 11].

注意：

节点值的范围在32位有符号整数范围内。
*****************************************************************************************************/

//层序遍历二叉树，逐层求平均值即可

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
