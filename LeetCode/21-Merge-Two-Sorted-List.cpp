class Solution {
    ListNode* finalList = NULL;
public:
    void addNode(int n) {
        ListNode* node = (ListNode*)malloc(sizeof(struct ListNode));
        ListNode* last = finalList;

        node->val = n;
        node->next = NULL;

        if (finalList == NULL) {
            finalList = node;
            return;
        }

        while (last->next != NULL)
            last = last->next;
        last->next = node;

        return;
    }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        while(1)
        {
            if(list1 == NULL && list2 == NULL)
            {
                break;
            }
            if(list1 == NULL)
            {
                addNode(list2->val);
                list2 = list2->next;
            }
            else if(list2 == NULL)
            {
                addNode(list1->val);
                list1 = list1->next;
            }
            else if(list1->val < list2->val)
            {
                addNode(list1->val);
                list1 = list1->next;
            }
            else if(list1->val == list2->val)
            {
                addNode(list1->val);
                addNode(list2->val);
                list1 = list1->next;
                list2 = list2->next;
            }
            else
            {
                addNode(list2->val);
                list2 = list2->next;
            }
        }

        return finalList;
    }
};
