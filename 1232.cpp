/**************************************1232 - ׺�����*************************************

��һ�� XY ����ϵ����һЩ�㣬���������� coordinates ���ֱ��¼���ǵ����꣬���� coordinates[i] = [x, y] ��ʾ������Ϊ x��������Ϊ y �ĵ㡣

�������жϣ���Щ���Ƿ��ڸ�����ϵ������ͬһ��ֱ���ϣ����򷵻� true�������뷵�� false��


ʾ�� 1��

���룺coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
�����true

ʾ�� 2��

���룺coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
�����false


��ʾ��

2 <= coordinates.length <= 1000
coordinates[i].length == 2
-10^4 <= coordinates[i][0], coordinates[i][1] <= 10^4
coordinates �в����ظ��ĵ�
*****************************************************************************************************/

//��������=�������Ϊ0

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int num = coordinates.size();
        vector<int> x(num - 1);
        vector<int> y(num - 1);
        for (int i = 1; i < num; i++)
        {
            x[i - 1] = coordinates[i][0] - coordinates[0][0];
            y[i - 1] = coordinates[i][1] - coordinates[0][1];
        }
        for (int i = 0; i < num - 1; i++)
        {
            if (x[0] * y[i] != x[i] * y[0])
                return false;
        }
        return true;
    }
};
