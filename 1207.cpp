/**************************************1207 - 独一无二的出现次数*************************************

给你一个整数数组 arr，请你帮忙统计数组中每个数的出现次数。

如果每个数的出现次数都是独一无二的，就返回 true；否则返回 false。



示例 1：

输入：arr = [1,2,2,1,1,3]
输出：true
解释：在该数组中，1 出现了 3 次，2 出现了 2 次，3 只出现了 1 次。没有两个数的出现次数相同。
示例 2：

输入：arr = [1,2]
输出：false
示例 3：

输入：arr = [-3,0,1,-3,1,1,1,-3,10,0]
输出：true


提示：

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*****************************************************************************************************/

//先利用map统计元素和出现次数，然后利用set对出现次数去重，如果出现重复现象返回false，否则返回true

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        int len = arr.size();
        for (int i = 0; i < len; i++)
        {
            if (m.find(arr[i]) != m.end())
                m[arr[i]]++;
            else
                m[arr[i]] = 1;
        }
        set<int> s;
        for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
        {
            if (s.find(it->second) != s.end())
                return false;
            else
                s.insert(it->second);
        }
        return true;
    }
};
