/**************************************500 - ������*************************************

����һ�������б�ֻ���ؿ���ʹ���ڼ���ͬһ�е���ĸ��ӡ�����ĵ��ʡ�


ʾ����

����: ["Hello", "Alaska", "Dad", "Peace"]
���: ["Alaska", "Dad"]


ע�⣺

������ظ�ʹ�ü�����ͬһ�ַ���
����Լ���������ַ�����ֻ������ĸ��
*****************************************************************************************************/

//��line�洢ÿ����ĸ�ڼ����ϵ�����

//֮�����ÿ���ַ��������ĳ���ַ������͵�һ���ַ�������ͬ���Ͳ�����������

//�����������û�в�ͬ�����������������

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
