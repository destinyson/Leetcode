/**************************************������ 02.03. ɾ���м�ڵ�*************************************

ʵ��һ���㷨��ɾ�����������м��ĳ���ڵ㣨���˵�һ�������һ���ڵ㣬��һ�����м�ڵ㣩���ٶ���ֻ�ܷ��ʸýڵ㡣



ʾ����

���룺��������a->b->c->d->e->f�еĽڵ�c
������������κ����ݣ�����������Ϊa->b->d->e->f
*****************************************************************************************************/

//��û��ͷ���������ɾ���м�ָ�����

//�ɲο�����ɾ��Ԫ�أ���νɾ����㣬�����ú���ֵ����ǰ���ֵ

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* pre;
        while (node->next)
        {
            node->val = node->next->val;
            pre = node;
            node = node->next;
        }
        pre->next = NULL;
    }
};