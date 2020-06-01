/**************************************1450 - �ڼȶ�ʱ������ҵ��ѧ������*************************************

���������������� startTime����ʼʱ�䣩�� endTime������ʱ�䣩����ָ��һ������ queryTime ��Ϊ��ѯʱ�䡣

��֪���� i ��ѧ���� startTime[i] ʱ��ʼд��ҵ���� endTime[i] ʱ�����ҵ��

�뷵���ڲ�ѯʱ�� queryTime ʱ��������ҵ��ѧ����������ʽ�ϣ������ܹ�ʹ queryTime �������� [startTime[i], endTime[i]]��������ѧ��������


ʾ�� 1��

���룺startTime = [1,2,3], endTime = [3,2,7], queryTime = 4
�����1
���ͣ�һ���� 3 ��ѧ����
��һ��ѧ����ʱ�� 1 ��ʼд��ҵ������ʱ�� 3 �����ҵ����ʱ�� 4 û�д�������ҵ��״̬��
�ڶ���ѧ����ʱ�� 2 ��ʼд��ҵ������ʱ�� 2 �����ҵ����ʱ�� 4 û�д�������ҵ��״̬��
�ڶ���ѧ����ʱ�� 3 ��ʼд��ҵ��Ԥ����ʱ�� 7 �����ҵ��������Ψһһ����ʱ�� 4 ʱ��������ҵ��ѧ����

ʾ�� 2��

���룺startTime = [4], endTime = [4], queryTime = 4
�����1
���ͣ��ڲ�ѯʱ��ֻ��һ��ѧ��������ҵ��

ʾ�� 3��

���룺startTime = [4], endTime = [4], queryTime = 5
�����0

ʾ�� 4��

���룺startTime = [1,1,1,1], endTime = [1,3,2,4], queryTime = 7
�����0

ʾ�� 5��

���룺startTime = [9,8,7,6,5,4,3,2,1], endTime = [10,10,10,10,10,10,10,10,10], queryTime = 5
�����5


��ʾ��

startTime.length == endTime.length
1 <= startTime.length <= 100
1 <= startTime[i] <= endTime[i] <= 1000
1 <= queryTime <= 1000
*****************************************************************************************************/

//����ɨ�����飬�����ѯ����

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int num = startTime.size();
        int ans = 0;
        for (int i = 0; i < num; i++)
        {
            if (startTime[i] <= queryTime && endTime[i] >= queryTime)
                ans++;
        }
        return ans;
    }
};
