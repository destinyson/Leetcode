/**************************************206 - ��ת����*************************************

��תһ��������

ʾ��:

����: 1->2->3->4->5->NULL
���: 5->4->3->2->1->NULL
*****************************************************************************************************/

//ͷ�巨��ת����

//ע��Ұָ�����⣡�м�ָ���������ʱһ��Ҫ��ʼ����

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* ans = NULL;
        ListNode* p;
        while (head)
        {
            p = new ListNode(head->val);
            p->next = ans;
            ans = p;
            head = head->next;
        }
        return ans;
    }
};
