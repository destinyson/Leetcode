/**************************************226 - ��ת������*************************************

��תһ�ö�������

ʾ����

���룺

     4
   /   \
  2     7
 / \   / \
1   3 6   9
�����

     4
   /   \
  7     2
 / \   / \
9   6 3   1
*****************************************************************************************************/

//�ݹ鷭ת������

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return NULL;
        else
        {
            root->left = invertTree(root->left);
            root->right = invertTree(root->right);
            swap(root->left, root->right);
            return root;
        }
    }
};
