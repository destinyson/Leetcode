/**************************************21 - 合并两个有序链表*************************************

将两个升序链表合并为一个新的升序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。

示例：

输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4
*****************************************************************************************************/

//双指针分别指向两链表头节点，逐一比较结果链表

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
