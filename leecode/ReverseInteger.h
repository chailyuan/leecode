#include <vector>
#include <math.h>


class ReverseInteger {
public:
	int reverse(int x) {
		int y=x;
		int i=0,j=0;
		std::vector<int> articles;

		while(y/10 != 0)
		{
			i++;
			articles.push_back(abs(y%10));
			y /=10;
		}

		i++;
		articles.push_back(abs(y%10));
		y /=10;

		while(i--)
		{
			if (y>INT_MAX/10||(y==INT_MAX/10 && articles[j]>1))
				return 0;			
			y = y*10+articles[j++];
		}
		if(x<0)
			return -y;				
		return y;
	}
};