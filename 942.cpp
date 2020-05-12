/**************************************942 - 增减字符串匹配*************************************

给定只含 "I"（增大）或 "D"（减小）的字符串 S ，令 N = S.length。

返回 [0, 1, ..., N] 的任意排列 A 使得对于所有 i = 0, ..., N-1，都有：

如果 S[i] == "I"，那么 A[i] < A[i+1]
如果 S[i] == "D"，那么 A[i] > A[i+1]


示例 1：

输出："IDID"
输出：[0,4,1,3,2]
示例 2：

输出："III"
输出：[0,1,2,3]
示例 3：

输出："DDI"
输出：[3,2,0,1]


提示：

1 <= S.length <= 10000
S 只包含字符 "I" 或 "D"。
*****************************************************************************************************/

//双指针问题，设立首尾指针

//遍历字符串，若为I将首指针插入结果向量并后移首指针，若为D将首指针插入结果向量并前移尾指针

//最后首尾指针必相同，即为结果向量最后一个元素

class Solution {
public:
    vector<int> diStringMatch(string S) {
        int len = S.length();
        vector<int> ans(len + 1);
        int start = 0;
        int finish = len;
        for (int i = 0; i < len; i++)
        {
            if (S[i] == 'I')
            {
                ans[i] = start;
                start++;
            }
            else if (S[i] == 'D')
            {
                ans[i] = finish;
                finish--;
            }
        }
        ans[len] = start;
        return ans;
    }
};
