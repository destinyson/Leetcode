/**************************************520 - 检测大写字母*************************************

给定一个单词，你需要判断单词的大写使用是否正确。

我们定义，在以下情况时，单词的大写用法是正确的：

全部字母都是大写，比如"USA"。
单词中所有字母都不是大写，比如"leetcode"。
如果单词不只含有一个字母，只有首字母大写， 比如 "Google"。
否则，我们定义这个单词没有正确使用大写字母。

示例 1:

输入: "USA"
输出: True

示例 2:

输入: "FlaG"
输出: False

注意: 输入是由大写和小写拉丁字母组成的非空单词。
*****************************************************************************************************/

//DFA，根据字母情况进行状态迁移

class Solution {
public:
    bool detectCapitalUse(string word) {
        int turn = 1;
        int len = word.length();
        if (len == 1)
            return true;
        for (int i = 0; i < len; i++)
        {
            switch(turn)
            {
                case 1:
                {
                    if (word[i] >= 'a' && word[i] <= 'z')
                        turn = 2;
                    else if (word[i] >= 'A' && word[i] <= 'Z')
                        turn = 3;
                    break;
                }
                case 2:
                {
                    if (word[i] >= 'a' && word[i] <= 'z')
                        turn = 2;
                    else if (word[i] >= 'A' && word[i] <= 'Z')
                        return false;
                    break;
                }
                case 3:
                {
                    if (word[i] >= 'a' && word[i] <= 'z')
                        turn = 4;
                    else if (word[i] >= 'A' && word[i] <= 'Z')
                        turn = 5;
                    break;
                }
                case 4:
                {
                    if (word[i] >= 'a' && word[i] <= 'z')
                        turn = 4;
                    else if (word[i] >= 'A' && word[i] <= 'Z')
                        return false;
                    break;
                }
                case 5:
                {
                    if (word[i] >= 'a' && word[i] <= 'z')
                        return false;
                    else if (word[i] >= 'A' && word[i] <= 'Z')
                        turn = 5;
                    break;
                }
                default:break;
            }
        }
        return true;
    }
};
