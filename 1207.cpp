/**************************************1207 - ��һ�޶��ĳ��ִ���*************************************

����һ���������� arr�������æͳ��������ÿ�����ĳ��ִ�����

���ÿ�����ĳ��ִ������Ƕ�һ�޶��ģ��ͷ��� true�����򷵻� false��



ʾ�� 1��

���룺arr = [1,2,2,1,1,3]
�����true
���ͣ��ڸ������У�1 ������ 3 �Σ�2 ������ 2 �Σ�3 ֻ������ 1 �Ρ�û���������ĳ��ִ�����ͬ��
ʾ�� 2��

���룺arr = [1,2]
�����false
ʾ�� 3��

���룺arr = [-3,0,1,-3,1,1,1,-3,10,0]
�����true


��ʾ��

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000
*****************************************************************************************************/

//������mapͳ��Ԫ�غͳ��ִ�����Ȼ������set�Գ��ִ���ȥ�أ���������ظ����󷵻�false�����򷵻�true

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
