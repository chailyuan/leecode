

class Solution{
public:
	bool isPalindrome(int x)
	{
		if (x<0 || (x!=0 && x%10 ==0))
			return false;
		int sum=0;
		while(x>sum)
		{
			sum = sum*10+x%10;
			x /=10;
		}

		return (sum==x)||(x==sum/10);
	}

	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL) {}
	};

	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		unsigned int len1=0,len2=0;
		char sum = 0;
		for (ListNode* i=l1;i->next!=NULL;i=i->next)
			len1++;
		for (ListNode* i=l2;i->next!=NULL;i=i->next)
			len2++;

		ListNode* r=len1>len2?l1:l2;
		ListNode* re= r;
		while(l1!=NULL||l2!=NULL||sum!=0)
		{
			r->val=(l1==NULL?0:l1->val)+(l2==NULL?0:l2->val)+sum;
			sum=r->val/10;
			r->val%=10;
			if (sum!=0&&r->next==NULL)
			{
				r->next=new ListNode(0);
			}
			l1=(l1==NULL?NULL:l1->next);
			l2=(l2==NULL?NULL:l2->next);
			r=(r==NULL?NULL:r->next);
		}
		return re;
	}
};