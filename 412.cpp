/**************************************412 - Fizz Buzz*************************************

写一个程序，输出从 1 到 n 数字的字符串表示。

1. 如果 n 是3的倍数，输出“Fizz”；

2. 如果 n 是5的倍数，输出“Buzz”；

3.如果 n 同时是3和5的倍数，输出 “FizzBuzz”。

示例：

n = 15,

返回:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
*****************************************************************************************************/

//按题意即可

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % 15 == 0)
                ans[i] = "FizzBuzz";
            else if ((i + 1) % 5 == 0)
                ans[i] = "Buzz";
            else if ((i + 1) % 3 == 0)
                ans[i] = "Fizz";
            else
                ans[i] = to_string(i + 1);
        }
        return ans;
    }
};
