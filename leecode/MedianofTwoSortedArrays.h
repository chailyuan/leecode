#include <vector>
#include <map>

using namespace std;

class MedianofTwoSortedArrays {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int length_a = nums1.size();
		int length_b = nums2.size();
		int m=length_a,n=length_b,k=0;
		int bigger=0,smaller=0;
		
		bool exitSign = false;

		if (length_b==0&&length_a==0)
		{
			return 0;
		}
		while(!exitSign)
		{
			if (length_a>0&&length_b>0)
			{
				if (nums1[length_a-1]>=nums2[length_b-1])
				{
					bigger=smaller;
					smaller=nums1[length_a-1];
					length_a--;
					k++;
				}
				else if (nums1[length_a-1]<nums2[length_b-1])
				{
					bigger=smaller;
					smaller=nums2[length_b-1];
					length_b--;
					k++;
				}
			}else if (length_a ==0)
			{
				bigger=smaller;
				smaller=nums2[length_b-1];
				length_b--;
				k++;
			}else if (length_b ==0)
			{
				bigger=smaller;
				smaller=nums1[length_a-1];
				length_a--;
				k++;
			}

			if (k==(m+n+1)/2 && (m+n)%2==1)
			{
				return smaller;
			}
			else if (k==1+(m+n+1)/2 && (m+n)%2==0)
			{
				return (smaller+bigger)*1.0/2.0;
			}
		}

		return 0;
	}
};