/**************************************500 - 键盘行*************************************

给定一个单词列表，只返回可以使用在键盘同一行的字母打印出来的单词。


示例：

输入: ["Hello", "Alaska", "Dad", "Peace"]
输出: ["Alaska", "Dad"]


注意：

你可以重复使用键盘上同一字符。
你可以假设输入的字符串将只包含字母。
*****************************************************************************************************/

//用line存储每个字母在键盘上的行数

//之后遍历每个字符串，如果某个字符行数和第一个字符行数不同，就不插入结果向量

//若遍历到最后没有不同的现象，则插入结果向量

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int line[26] = {2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        int num = words.size();
        vector<string> ans;
        for (int i = 0; i < num; i++)
        {
            string str = words[i];
            int len = str.length();
            int this_line = line[(int)toupper(str[0]) - 65];
            bool same = true;
            for (int j = 1; j < len; j++)
            {
                if (line[(int)toupper(str[j]) - 65] != this_line)
                {
                    same = false;
                    break;
                }
            }
            if (same)
                ans.push_back(str);
        }
        return ans;
    }
};
