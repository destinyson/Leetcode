/**************************************203 - �Ƴ�����Ԫ��*************************************

ɾ�������е��ڸ���ֵ val �����нڵ㡣

ʾ��:

����: 1->2->6->3->4->5->6, val = 6
���: 1->2->3->4->5
*****************************************************************************************************/

//����ɾ�������ײ�ָ��Ԫ�ؽ�㣬ȷ���������ײ�

//֮���������ɾ��ָ��Ԫ�ؽ�㼴��

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head && head->val == val)
            head = head->next;
        ListNode* p = head;
        while (p)
        {
            while (p->next && p->next->val == val)
                p->next = p->next->next;
            p = p->next;
        }
        return head;
    }
};
