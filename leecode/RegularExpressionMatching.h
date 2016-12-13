#include <string>
using namespace std;

class RegularExpressionMatching {
public:
	bool isMatch(std::string s, std::string p) {
		basic_string <char>::size_type indexCh1a,_off;

		indexCh1a = p.find(s);
		if (indexCh1a != string::npos )
			return true;

		indexCh1a = 0;
		_off = 4;
		indexCh1a = p.find_first_of(s[0],_off);

		while(indexCh1a != string::npos)
		{
			int i = 0;
			for (i=1;i<s.length(),indexCh1a+s.length()<p.length();i++)
			{
				if (s[i]!=p[indexCh1a+i] && '.'!=p[indexCh1a+i])
				{
					break;
				}
			}
			if (i==s.length())
			{
				return true;
			}
			_off = indexCh1a+1;
			indexCh1a = p.find_first_of(s[0],_off);
		}

		return false;
	}
};