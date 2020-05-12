/**************************************面试题32 - II 从上到下打印二叉树 II*************************************

从上到下按层打印二叉树，同一层的节点按从左到右的顺序打印，每一层打印到一行。



例如:
给定二叉树: [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
返回其层次遍历结果：

[
  [3],
  [9,20],
  [15,7]
]


提示：

节点总数 <= 1000
*****************************************************************************************************/

//二叉树的层序遍历，注意空树的特殊情况

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
