/**************************************401 - �������ֱ�*************************************

�������ֱ����� 4 �� LED ���� Сʱ��0-11�����ײ��� 6 �� LED ���� ���ӣ�0-59����

ÿ�� LED ����һ�� 0 �� 1�����λ���Ҳࡣ

����һ���Ǹ����� n ����ǰ LED ���ŵ��������������п��ܵ�ʱ�䡣


ʾ����

����: n = 1
����: ["1:00", "2:00", "4:00", "8:00", "0:01", "0:02", "0:04", "0:08", "0:16", "0:32"]


��ʾ��

�����˳��û��Ҫ��
Сʱ�������㿪ͷ������ ��01:00�� �ǲ�����ģ�ӦΪ ��1:00����
���ӱ�������λ����ɣ����ܻ����㿪ͷ������ ��10:2�� ����Ч�ģ�ӦΪ ��10:02����
������ʾ��Χ��Сʱ 0-11������ 0-59�������ݽ��ᱻ������Ҳ����˵������� "13:00", "0:61" ��ʱ�䡣
*****************************************************************************************************/

//����ͳ��0~59ÿ������Ҫ���ٵƣ�Ȼ������ܵ���ȷ��ʱ���ֵĵ�����Χ

//�ڷ�Χ�ڸ���ʱ���ֵ���ȷ���ֲ��ֵ����������������ֵ�����������ʱ���ַ���

class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<vector<int> >point_num(6);
        for (int i = 0; i < 60; i++)
        {
            int temp = i;
            int led_num = 0;
            while (temp)
            {
                if (temp % 2)
                    led_num++;
                temp = temp >> 1;
            }
            point_num[led_num].push_back(i);
        }
        vector<string> ans;
        int hour_max_num = num <= 3 ? num : 3;
        int hour_min_num = 0 >= (num - 5) ? 0 : (num - 5);
        for (int hour_num = hour_min_num; hour_num <= hour_max_num; hour_num++)
        {
            int minute_num = num - hour_num;
            int hour = point_num[hour_num].size();
            int minute = point_num[minute_num].size();
            for (int j = 0; j < minute; j++)
            {
                for (int i = 0; i < hour; i++)
                {
                    if (point_num[hour_num][i] >= 12)
                        break;
                    string hour_str = to_string(point_num[hour_num][i]) + ":";
                    string minute_str = to_string(point_num[minute_num][j]);
                    if (minute_str.length() == 1)
                        minute_str = "0" + minute_str;
                    ans.push_back(hour_str + minute_str);
                }
            }
        }
        return ans;
    }
};
