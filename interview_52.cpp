/**************************************������52. ��������ĵ�һ�������ڵ�*************************************

�������������ҳ����ǵĵ�һ�������ڵ㡣


ʾ�� 1��
���룺intersectVal = 8, listA = [4,1,8,4,5], listB = [5,0,1,8,4,5], skipA = 2, skipB = 3
�����Reference of the node with value = 8
������ͣ��ཻ�ڵ��ֵΪ 8 ��ע�⣬��������б��ཻ����Ϊ 0�����Ӹ��Եı�ͷ��ʼ�������� A Ϊ [4,1,8,4,5]������ B Ϊ [5,0,1,8,4,5]���� A �У��ཻ�ڵ�ǰ�� 2 ���ڵ㣻�� B �У��ཻ�ڵ�ǰ�� 3 ���ڵ㡣


ʾ�� 2��
���룺intersectVal = 2, listA = [0,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
�����Reference of the node with value = 2
������ͣ��ཻ�ڵ��ֵΪ 2 ��ע�⣬��������б��ཻ����Ϊ 0�����Ӹ��Եı�ͷ��ʼ�������� A Ϊ [0,9,1,2,4]������ B Ϊ [3,2,4]���� A �У��ཻ�ڵ�ǰ�� 3 ���ڵ㣻�� B �У��ཻ�ڵ�ǰ�� 1 ���ڵ㡣


ʾ�� 3��
���룺intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
�����null
������ͣ��Ӹ��Եı�ͷ��ʼ�������� A Ϊ [2,6,4]������ B Ϊ [1,5]�����������������ཻ������ intersectVal ����Ϊ 0���� skipA �� skipB ����������ֵ��
���ͣ������������ཻ����˷��� null��


ע�⣺

�����������û�н��㣬���� null.
�ڷ��ؽ���������������뱣��ԭ�еĽṹ��
�ɼٶ���������ṹ��û��ѭ����
���������� O(n) ʱ�临�Ӷȣ��ҽ��� O(1) �ڴ档
*****************************************************************************************************/

//���������ཻ������������壬��������β������ͬ

//������ҵ��ཻ��㣬��Ҫ��������β�����룬���ڱ�������ͬʱͳ�Ƴ���

//β������֮�󣬱���Ѱ����ͬ��㣬��Ϊ�ཻ���

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!(headA && headB))
            return NULL;
        int lenA = 1;
        int lenB = 1;
        ListNode* a = headA;
        ListNode* b = headB;
        while (a->next)
        {
            a = a->next;
            lenA++;
        }
        while (b->next)
        {
            b = b->next;
            lenB++;
        }
        if (a != b)
            return NULL;
        a = headA;
        b = headB;
        int len = min(lenA, lenB);
        int more = abs(lenA - lenB);
        if (lenA > lenB)
        {
            while (more--)
                a = a->next;
        }
        else
        {
            while (more--)
                b = b->next;
        }
        while (a != b)
        {
            a = a->next;
            b = b->next;
        }
        return a;
    }
};
