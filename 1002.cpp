/**************************************1002 - ���ҳ����ַ�*************************************

��������Сд��ĸ��ɵ��ַ������� A�������б��е�ÿ���ַ����ж���ʾ��ȫ���ַ��������ظ��ַ�����ɵ��б����磬���һ���ַ���ÿ���ַ����г��� 3 �Σ������� 4 �Σ�����Ҫ�����մ��а������ַ� 3 �Ρ�

����԰�����˳�򷵻ش𰸡�



ʾ�� 1��

���룺["bella","label","roller"]
�����["e","l","l"]

ʾ�� 2��

���룺["cool","lock","cook"]
�����["c","o"]


��ʾ��

1 <= A.length <= 100
1 <= A[i].length <= 100
A[i][j] ��Сд��ĸ
*****************************************************************************************************/

//ͳ��ÿ����������ĸ�ĳ��ִ�����ȡ��Сֵ���õ����е�������ĸ�Ĺ������ִ���

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
