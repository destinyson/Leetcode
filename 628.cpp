/**************************************628 - �����������˻�*************************************

����һ���������飬���������ҳ�����������ɵ����˻������������˻���

ʾ�� 1:

����: [1,2,3]
���: 6

ʾ�� 2:

����: [1,2,3,4]
���: 24

ע��:

�������������鳤�ȷ�Χ��[3,104]�����������е�Ԫ�ط�Χ��[-1000, 1000]��
����������������������ĳ˻����ᳬ��32λ�з��������ķ�Χ��
*****************************************************************************************************/

//���ֵֻ������nums[len - 1] * nums[len - 2] * nums[len - 3]��nums[0] * nums[1] * nums[len - 1]�в���

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int ans1 = nums[len - 1] * nums[len - 2] * nums[len - 3];
        int ans2 = nums[0] * nums[1] * nums[len - 1];
        return ans1 > ans2 ? ans1 : ans2;
    }
};