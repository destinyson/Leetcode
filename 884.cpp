/**************************************884 - ���仰�еĲ���������*************************************

������������ A �� B �� ��������һ���ɿո�ָ��ĵ��ʡ�ÿ�����ʽ���Сд��ĸ��ɡ���

���һ������������һ��������ֻ����һ�Σ�����һ��������ȴû�г��֣���ô������ʾ��ǲ������ġ�

�������в����õ��ʵ��б�

�����԰��κ�˳�򷵻��б�



ʾ�� 1��

���룺A = "this apple is sweet", B = "this apple is sour"
�����["sweet","sour"]

ʾ�� 2��

���룺A = "apple apple", B = "banana"
�����["banana"]


��ʾ��

0 <= A.length <= 200
0 <= B.length <= 200
A �� B ��ֻ�����ո��Сд��ĸ��
*****************************************************************************************************/

//��һ��������ֻ����һ�Σ���һ�������в����֣��ȼ��ڳ��ִ���֮��Ϊ1

//ͳ���������е��ʳ��ִ���֮�ͣ������к�Ϊ1�ļ���

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
