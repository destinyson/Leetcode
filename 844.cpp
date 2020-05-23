/**************************************844 - �ȽϺ��˸���ַ���*************************************

���� S �� T �����ַ����������Ƿֱ����뵽�հ׵��ı��༭�����ж϶����Ƿ���ȣ������ؽ���� # �����˸��ַ���

ע�⣺����Կ��ı������˸��ַ����ı�����Ϊ�ա�


ʾ�� 1��

���룺S = "ab#c", T = "ad#c"
�����true
���ͣ�S �� T ������ ��ac����

ʾ�� 2��

���룺S = "ab##", T = "c#d#"
�����true
���ͣ�S �� T ������ ������

ʾ�� 3��

���룺S = "a##c", T = "#a#c"
�����true
���ͣ�S �� T ������ ��c����

ʾ�� 4��

���룺S = "a#c", T = "b"
�����false
���ͣ�S ���� ��c������ T ��Ȼ�� ��b����
*****************************************************************************************************/

//�˸񣬿����õ�ջģ��

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<int> s;
        stack<int> t;
        int slen = S.length();
        int tlen = T.length();
        for (int i = 0; i < slen; i++)
        {
            if (S[i] == '#' && s.size() > 0)
                s.pop();
            else if (S[i] != '#')
                s.push(S[i]);
        }
        for (int i = 0; i < tlen; i++)
        {
            if (T[i] == '#' && t.size() > 0)
                t.pop();
            else if (T[i] != '#')
                t.push(T[i]);
        }
        if (s.size() == t.size())
        {
            while (s.size())
            {
                if (s.top() != t.top())
                    return false;
                s.pop();
                t.pop();
            }
            return true;
        }
        return false;
    }
};
