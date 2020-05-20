/**************************************21 - �ϲ�������������*************************************

��������������ϲ�Ϊһ���µ������������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�

ʾ����

���룺1->2->4, 1->3->4
�����1->1->2->3->4->4
*****************************************************************************************************/

//˫ָ��ֱ�ָ��������ͷ�ڵ㣬��һ�ȽϽ������

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1)
            return l2;
        else if (!l2)
            return l1;
        else
        {
            ListNode* ans = new ListNode(0);
            ListNode* p = l1;
            ListNode* q = l2;
            ListNode* r = ans;
            while (p && q)
            {
                if (p->val < q->val)
                {
                    r->next = p;
                    p = p->next;
                }
                else
                {
                    r->next = q;
                    q = q->next;
                }
                r = r->next;
            }
            if (p)
                r->next = p;
            if (q)
                r->next = q;
            return ans->next;
        }
    }
};
