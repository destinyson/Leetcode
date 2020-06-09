/**************************************884 - 两句话中的不常见单词*************************************

给定两个句子 A 和 B 。 （句子是一串由空格分隔的单词。每个单词仅由小写字母组成。）

如果一个单词在其中一个句子中只出现一次，在另一个句子中却没有出现，那么这个单词就是不常见的。

返回所有不常用单词的列表。

您可以按任何顺序返回列表。



示例 1：

输入：A = "this apple is sweet", B = "this apple is sour"
输出：["sweet","sour"]

示例 2：

输入：A = "apple apple", B = "banana"
输出：["banana"]


提示：

0 <= A.length <= 200
0 <= B.length <= 200
A 和 B 都只包含空格和小写字母。
*****************************************************************************************************/

//在一个句子中只出现一次，另一个句子中不出现，等价于出现次数之和为1

//统计两句子中单词出现次数之和，找其中和为1的即可

class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        map<string, int> m;
        while (A.find(" ") != A.npos)
        {
            string str = A.substr(0, A.find(" "));
            if (m.find(str) != m.end())
                m[str]++;
            else
                m[str] = 1;
            A.erase(0, A.find(" ") + 1);
        }
        if (m.find(A) != m.end())
            m[A]++;
        else
            m[A] = 1;
        while (B.find(" ") != B.npos)
        {
            string str = B.substr(0, B.find(" "));
            if (m.find(str) != m.end())
                m[str]++;
            else
                m[str] = 1;
            B.erase(0, B.find(" ") + 1);
        }
        if (m.find(A) != m.end())
            m[B]++;
        else
            m[B] = 1;
        vector<string> ans;
        for (map<string, int>::iterator it = m.begin(); it != m.end(); it++)
        {
            if (it->second == 1)
                ans.push_back(it->first);
        }
        return ans;
    }
};
