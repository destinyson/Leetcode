/**************************************1394 - �ҳ������е�������*************************************

�����������У����һ�������ĳ���Ƶ�κ�������ֵ��С��ȣ����Ǿͳ��������Ϊ������������

����һ���������� arr����������ҳ�������һ����������

��������д��ڶ����������ֻ�践�� ��� ���Ǹ���
��������в������������򷵻� -1 ��


ʾ�� 1��

���룺arr = [2,2,3,4]
�����2
���ͣ�������Ψһ���������� 2 ����Ϊ��ֵ 2 �ĳ���Ƶ��Ҳ�� 2 ��

ʾ�� 2��

���룺arr = [1,2,2,3,3,3]
�����3
���ͣ�1��2 �Լ� 3 ������������ֻ��Ҫ������������ 3 ��

ʾ�� 3��

���룺arr = [2,2,2,3,3]
�����-1
���ͣ������в�������������

ʾ�� 4��

���룺arr = [5]
�����-1

ʾ�� 5��

���룺arr = [7,7,7,7,7,7,7]
�����7


��ʾ��

1 <= arr.length <= 500
1 <= arr[i] <= 500
*****************************************************************************************************/

//����ͳ��arr��Ԫ�س��ִ���

//���ڷ��ؽ��Ϊ�������������˵������times���飬�����ִ�����ű���ͬ�򷵻�֮

//û������������-1

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int times[501] = {0};
        int len = arr.size();
        for (int i = 0; i < len; i++)
            times[arr[i]]++;
        for (int i = 500; i > 0; i--)
        {
            if (times[i] == i)
                return i;
        }
        return -1;
    }
};