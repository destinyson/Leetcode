/**************************************203 - 移除链表元素*************************************

删除链表中等于给定值 val 的所有节点。

示例:

输入: 1->2->6->3->4->5->6, val = 6
输出: 1->2->3->4->5
*****************************************************************************************************/

//首先删除链表首部指定元素结点，确定新链表首部

//之后遍历链表，删除指定元素结点即可

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
