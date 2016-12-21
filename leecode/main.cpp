#include <iostream>
#include "Solution.h"

int main()
{
	Solution s;
	int x;
	std::cin>>x;

	while(x!=1)
	{
		bool a=  s.isPalindrome(x);
		std::cout<<a<<std::endl;
		std::cin>>x;
	}

	return 0;
}