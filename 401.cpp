/**************************************401 - 二进制手表*************************************

二进制手表顶部有 4 个 LED 代表 小时（0-11），底部的 6 个 LED 代表 分钟（0-59）。

每个 LED 代表一个 0 或 1，最低位在右侧。

给定一个非负整数 n 代表当前 LED 亮着的数量，返回所有可能的时间。


示例：

输入: n = 1
返回: ["1:00", "2:00", "4:00", "8:00", "0:01", "0:02", "0:04", "0:08", "0:16", "0:32"]


提示：

输出的顺序没有要求。
小时不会以零开头，比如 “01:00” 是不允许的，应为 “1:00”。
分钟必须由两位数组成，可能会以零开头，比如 “10:2” 是无效的，应为 “10:02”。
超过表示范围（小时 0-11，分钟 0-59）的数据将会被舍弃，也就是说不会出现 "13:00", "0:61" 等时间。
*****************************************************************************************************/

//首先统计0~59每个数需要多少灯，然后根据总灯数确定时部分的灯数范围

//在范围内根据时部分灯数确定分部分灯数，最后根据两部分灯数遍历构造时间字符串

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
