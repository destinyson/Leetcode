/**************************************412 - Fizz Buzz*************************************

дһ����������� 1 �� n ���ֵ��ַ�����ʾ��

1. ��� n ��3�ı����������Fizz����

2. ��� n ��5�ı����������Buzz����

3.��� n ͬʱ��3��5�ı�������� ��FizzBuzz����

ʾ����

n = 15,

����:
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

//�����⼴��

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
