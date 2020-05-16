/**************************************1380 - 矩阵中的幸运数*************************************

给你一个 m * n 的矩阵，矩阵中的数字 各不相同 。请你按 任意 顺序返回矩阵中的所有幸运数。

幸运数是指矩阵中满足同时下列两个条件的元素：

在同一行的所有元素中最小
在同一列的所有元素中最大


示例 1：

输入：matrix = [[3,7,8],[9,11,13],[15,16,17]]
输出：[15]
解释：15 是唯一的幸运数，因为它是其所在行中的最小值，也是所在列中的最大值。

示例 2：

输入：matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
输出：[12]
解释：12 是唯一的幸运数，因为它是其所在行中的最小值，也是所在列中的最大值。

示例 3：

输入：matrix = [[7,8],[1,2]]
输出：[7]


提示：

m == mat.length
n == mat[i].length
1 <= n, m <= 50
1 <= matrix[i][j] <= 10^5
矩阵中的所有元素都是不同的
*****************************************************************************************************/

//首先寻找每一行的最小值所在列，并记录下来

//之后检查每一行记录值对应数是否为所在列最大的数，若为最大数则为幸运数

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> row_min(row, 0);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (matrix[i][row_min[i]] > matrix[i][j])
                    row_min[i] = j;
            }
        }
        for (int i = 0; i < row; i++)
        {
            int max_col = row_min[i];
            for (int j = 0; j < row; j++)
            {
                if (matrix[j][max_col] > matrix[i][max_col])
                {
                    row_min[i] = -1;
                    break;
                }
            }
        }
        vector<int> ans;
        for (int i = 0; i < row; i++)
        {
            if (row_min[i] != -1)
                ans.push_back(matrix[i][row_min[i]]);
        }
        return ans;
    }
};
