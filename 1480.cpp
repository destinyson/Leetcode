/**************************************1480 - һά����Ķ�̬��*************************************

����һ������ nums �����顸��̬�͡��ļ��㹫ʽΪ��runningSum[i] = sum(nums[0]��nums[i]) ��

�뷵�� nums �Ķ�̬�͡�


ʾ�� 1��

���룺nums = [1,2,3,4]
�����[1,3,6,10]
���ͣ���̬�ͼ������Ϊ [1, 1+2, 1+2+3, 1+2+3+4] ��

ʾ�� 2��

���룺nums = [1,1,1,1,1]
�����[1,2,3,4,5]
���ͣ���̬�ͼ������Ϊ [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1] ��

ʾ�� 3��

���룺nums = [3,1,2,10,1]
�����[3,4,6,16,17]


��ʾ��

1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6
*****************************************************************************************************/

//���չ�����㼴��

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int len = nums.size();
        for (int i = 1; i < len; i++)
            nums[i] = nums[i] + nums[i - 1];
        return nums;
    }
};