/**************************************1002 - 查找常用字符*************************************

给定仅有小写字母组成的字符串数组 A，返回列表中的每个字符串中都显示的全部字符（包括重复字符）组成的列表。例如，如果一个字符在每个字符串中出现 3 次，但不是 4 次，则需要在最终答案中包含该字符 3 次。

你可以按任意顺序返回答案。



示例 1：

输入：["bella","label","roller"]
输出：["e","l","l"]

示例 2：

输入：["cool","lock","cook"]
输出：["c","o"]


提示：

1 <= A.length <= 100
1 <= A[i].length <= 100
A[i][j] 是小写字母
*****************************************************************************************************/

//统计每个单词中字母的出现次数，取最小值，得到所有单词中字母的公共出现次数

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        int num = A.size();
        int times[26] = {0};
        string str = A[0];
        int len = str.length();
        for (int j = 0; j < len; j++)
            times[(int)str[j] - 97]++;
        int temp[26] = {0};
        for (int i = 1; i < num; i++)
        {
            str = A[i];
            len = str.length();
            for (int j = 0; j < len; j++)
                temp[(int)str[j] - 97]++;
            for (int j = 0; j < 26; j++)
                times[j] = times[j] < temp[j] ? times[j] : temp[j];
            memset(temp, 0, sizeof(temp));
        }
        vector<string> ans;
        for (int i = 0; i < 26; i++)
        {
            while (times[i]--)
            {
                string s(1, (char)(i + 97));
                ans.push_back(s);
            }
        }
        return ans;
    }
};
