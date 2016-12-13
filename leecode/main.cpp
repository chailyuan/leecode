#include "ReverseInteger.h"
#include "MedianofTwoSortedArrays.h"
#include "RegularExpressionMatching.h"

int main()
{
	std::string s1("aab");
	std::string s2("c*a*b");

	RegularExpressionMatching s;
	bool b =s.isMatch(s1,s2);

	return 0;
}