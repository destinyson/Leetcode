/**************************************383 - 赎金信*************************************

给定一个赎金信 (ransom) 字符串和一个杂志(magazine)字符串，判断第一个字符串 ransom 能不能由第二个字符串 magazines 里面的字符构成。如果可以构成，返回 true ；否则返回 false。

(题目说明：为了不暴露赎金信字迹，要从杂志上搜索各个需要的字母，组成单词来表达意思。杂志字符串中的每个字符只能在赎金信字符串中使用一次。)



注意：

你可以假设两个字符串均只含有小写字母。

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
*****************************************************************************************************/

//统计两个次数，若赎金信所有字符出现次数小于杂志中对应字符出现次数，说明可以构成

//用差值表示大小关系，节省一个向量的空间

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int mlen = magazine.length();
        int rlen = ransomNote.length();
        int times[26] = {0};
        for (int i = 0; i < mlen; i++)
            times[(int)magazine[i] - 97]++;
        for (int i = 0; i < rlen; i++)
            times[(int)ransomNote[i] - 97]--;
        for (int i = 0; i < 26; i++)
        {
            if (times[i] < 0)
                return false;
        }
        return true;
    }
};
