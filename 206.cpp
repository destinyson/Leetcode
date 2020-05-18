/**************************************206 - 反转链表*************************************

反转一个单链表。

示例:

输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL
*****************************************************************************************************/

//头插法反转链表

//注意野指针问题！切记指针变量定义时一定要初始化！

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
