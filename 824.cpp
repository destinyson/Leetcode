/**************************************824 - ɽ��������*************************************

����һ���ɿո�ָ�ʵľ��� S��ÿ������ֻ������д��Сд��ĸ��

����Ҫ������ת��Ϊ ��Goat Latin����һ�������� �������� - Pig Latin ���鹹���ԣ���

ɽ�������ĵĹ������£�

���������Ԫ����ͷ��a, e, i, o, u�����ڵ��ʺ����"ma"��
���磬����"apple"��Ϊ"applema"��

��������Ը�����ĸ��ͷ������Ԫ����ĸ�����Ƴ���һ���ַ��������ŵ�ĩβ��֮�������"ma"��
���磬����"goat"��Ϊ"oatgma"��

���ݵ����ھ����е��������ڵ�����������������ͬ��������ĸ'a'��������1��ʼ��
���磬�ڵ�һ�����ʺ����"a"���ڵڶ������ʺ����"aa"���Դ����ơ�
���ؽ� S ת��Ϊɽ�������ĺ�ľ��ӡ�

ʾ�� 1:

����: "I speak Goat Latin"
���: "Imaa peaksmaaa oatGmaaaa atinLmaaaaa"

ʾ�� 2:

����: "The quick brown fox jumped over the lazy dog"
���: "heTmaa uickqmaaa rownbmaaaa oxfmaaaaa umpedjmaaaaaa overmaaaaaaa hetmaaaaaaaa azylmaaaaaaaaa ogdmaaaaaaaaaa"

˵��:

S �н�������Сд��ĸ�Ϳո񡣵��ʼ����ҽ���һ���ո�
1 <= S.length <= 150��
*****************************************************************************************************/

//�������켴��

class Solution {
public:
    string toGoatLatin(string S) {
        string ans;
        int order = 1;
        while (S.find(" ") != S.npos)
        {
            int pos = S.find(" ");
            string str = S.substr(0, pos);
            S.erase(0, pos + 1);
            if (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u' || str[0] == 'A' || str[0] == 'E' || str[0] == 'I' || str[0] == 'O' || str[0] == 'U');
            else
            {
                str.append(1, str[0]);
                str.erase(0, 1);
            }
            str = str + "ma";
            str.append(order, 'a');
            ans = ans + str + " ";
            order++;
        }
        if (S[0] == 'a' || S[0] == 'e' || S[0] == 'i' || S[0] == 'o' || S[0] == 'u' || S[0] == 'A' || S[0] == 'E' || S[0] == 'I' || S[0] == 'O' || S[0] == 'U');
        else
        {
            S.append(1, S[0]);
            S.erase(0, 1);
        }
        S = S + "ma";
        S.append(order, 'a');
        return ans + S;
    }
};
