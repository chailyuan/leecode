#include <string>
using namespace std;

class RegularExpressionMatching {
public:
	bool isMatch(std::string s, std::string p) {
		string::size_type indexCh1=0,indexCh2a=0,indexCh2b=0,_off=0;
		char next=0;

		indexCh1 = p.find(s);
		if (indexCh1 != string::npos )
			return true;

		indexCh1 = 0;

		for (indexCh2a=0;indexCh2a<p.size();)
		{
			for (indexCh1=0;indexCh1<s.size(),indexCh2a+indexCh2b<p.size();)
			{
				if (s[indexCh1]==p[indexCh2a+indexCh2b])
				{
					indexCh1++;
					indexCh2b++;
				}
				else if (p[indexCh2a+indexCh2b]=='.')
				{
					indexCh1++;
					indexCh2b++;
				}
				else if (p[indexCh2a+indexCh2b]=='*')
				{
					string::size_type i = p.find_first_not_of(s[indexCh1],indexCh2a+indexCh2b+1);
					string::size_type j = s.find_first_not_of(s[indexCh1],indexCh1+1);

					if (i==string::npos && j==string::npos)
					{
						return true;
					}
					else if (i !=string::npos && j==string::npos)
					{
						return true;
					}else if (i==string::npos && j!=string::npos)
					{
						return false;
					}else if (i!=string::npos && j!=string::npos)
					{
						indexCh1=j;
						indexCh2b=i-indexCh2a;
					}
				}
				else
					break;
				if (indexCh1==s.size())
					return true;
			}
			indexCh2a++;
		}
		if (indexCh1==s.size())
		{
			return true;
		}
		else if (indexCh1<s.size())
		{
			return false;
		}

		return false;
	}
};