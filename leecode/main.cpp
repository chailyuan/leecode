#include "ReverseInteger.h"
#include "MedianofTwoSortedArrays.h"
#include "RegularExpressionMatching.h"

int main()
{
	std::string s1("aaa");
	std::string s2("ab*a");

	RegularExpressionMatching s;
	bool b =s.isMatch(s1,s2);

	return 0;
}