/**************************************682 - �������*************************************

�������ǰ��������¼Ա��
����һ���ַ����б���ÿ���ַ���������������������֮һ��
1.������һ�ֵĵ÷֣���ֱ�ӱ�ʾ���ڱ����л�õĻ�������
2. "+"��һ�ֵĵ÷֣�����ʾ���ֻ�õĵ÷���ǰ������Ч �غϵ÷ֵ��ܺ͡�
3. "D"��һ�ֵĵ÷֣�����ʾ���ֻ�õĵ÷���ǰһ����Ч �غϵ÷ֵ�������
4. "C"��һ���������ⲻ��һ���غϵķ���������ʾ����õ����һ����Ч �غϵķ�������Ч�ģ�Ӧ�ñ��Ƴ���

ÿһ�ֵĲ������������Եģ����ܻ��ǰһ�ֺͺ�һ�ֲ���Ӱ�졣
����Ҫ�����������лغ��е÷ֵ��ܺ͡�

ʾ�� 1:

����: ["5","2","C","D","+"]
���: 30
����:
��1�֣�����Եõ�5�֡��ܺ��ǣ�5��
��2�֣�����Եõ�2�֡��ܺ��ǣ�7��
����1����2�ֵ�������Ч���ܺ��ǣ�5��
��3�֣�����Եõ�10�֣���2�ֵ������ѱ�ɾ�����������ǣ�15��
��4�֣�����Եõ�5 + 10 = 15�֡������ǣ�30��

ʾ�� 2:

����: ["5","-2","4","C","D","9","+","+"]
���: 27
����:
��1�֣�����Եõ�5�֡��ܺ��ǣ�5��
��2�֣�����Եõ�-2�֡������ǣ�3��
��3�֣�����Եõ�4�֡��ܺ��ǣ�7��
����1����3�ֵ�������Ч�������ǣ�3��
��4�֣�����Եõ�-4�֣������ֵ������ѱ�ɾ�������ܺ��ǣ�-1��
��5�֣�����Եõ�9�֡������ǣ�8��
��6�֣�����Եõ�-4 + 9 = 5�֡�������13��
��7�֣�����Եõ�9 + 5 = 14�֡�������27��

ע�⣺

�����б��Ĵ�С������1��1000֮�䡣
�б��е�ÿ��������������-30000��30000֮�䡣
*****************************************************************************************************/

//��������������¼ÿһ�ֵ÷֣������⼴��

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> point;
        int num = ops.size();
        for (int i = 0; i < num; i++)
        {
            if (ops[i] == "+")
                point.push_back(point.back() + *(point.end() - 2));
            else if (ops[i] == "D")
                point.push_back(point.back() * 2);
            else if (ops[i] == "C")
                point.pop_back();
            else
                point.push_back(atoi(ops[i].c_str()));
        }
        int len = point.size();
        int ans = 0;
        for (int i = 0; i < len; i++)
            ans = ans + point[i];
        return ans;
    }
};