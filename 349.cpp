/**************************************349 - ��������Ľ���*************************************

�����������飬��дһ���������������ǵĽ�����

ʾ�� 1:

����: nums1 = [1,2,2,1], nums2 = [2,2]
���: [2]


ʾ�� 2:

����: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
���: [9,4]

˵��:

�������е�ÿ��Ԫ��һ����Ψһ�ġ�
���ǿ��Բ�������������˳��
*****************************************************************************************************/

//���Ƚ�������������֮������˫ָ��˼·ȡ����

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int len1 = nums1.size();
        int len2 = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0;
        int j = 0;
        while (i < len1 && j < len2)
        {
            if (nums1[i] == nums2[j])
            {
                if (ans.size() == 0 || ans[0] != nums1[i])
                    ans.insert(ans.begin(), nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] > nums2[j])
                j++;
            else
                i++;
        }
        return ans;
    }
};
