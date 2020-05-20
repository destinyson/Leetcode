/**************************************383 - �����*************************************

����һ������� (ransom) �ַ�����һ����־(magazine)�ַ������жϵ�һ���ַ��� ransom �ܲ����ɵڶ����ַ��� magazines ������ַ����ɡ�������Թ��ɣ����� true �����򷵻� false��

(��Ŀ˵����Ϊ�˲���¶������ּ���Ҫ����־������������Ҫ����ĸ����ɵ����������˼����־�ַ����е�ÿ���ַ�ֻ����������ַ�����ʹ��һ�Ρ�)



ע�⣺

����Լ��������ַ�����ֻ����Сд��ĸ��

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
*****************************************************************************************************/

//ͳ������������������������ַ����ִ���С����־�ж�Ӧ�ַ����ִ�����˵�����Թ���

//�ò�ֵ��ʾ��С��ϵ����ʡһ�������Ŀռ�

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
