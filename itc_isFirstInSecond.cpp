#include "middle_str.h"

long long itc_find_str(string str1, string str2)
{
    if (itc_len(str2) > itc_len(str1))
        return -1;
    else
    {
        int answer = 1;
    for (int i = 0; i < itc_len(str1); i++)
    {
        if (str1[i] == str2[0] && itc_len(str1) - i >= itc_len(str2))
        {
                for (int j = 1; j < itc_len(str2); j++)
                {
                    if (str2[j] == str1[i + j])
                        answer++;
                    else
                    {
                        answer = 1;
                    }
                }
                if (answer == itc_len(str2))
                    return i;
        }
    }
    return -1;
    }
}
bool itc_isFirstInSecond(string s1, string s2)
{
    if (s1 == "" && s2 == "")
        return false;
    string tmp = s1;
	s1 = s2, s2 = tmp;
	int n1 = itc_len(s1);
	int n2 = itc_len(s2);
	bool statement = false;
	if (n1 < n2)
        return false;
	for (int i = 0; i < n1-n2+1; i++){
		bool statement = false;
		if (s1[i] == s2[0]) {
			statement = true;
			for (int j = 1; j < n2; j++)
				if (s1[i + j] != s2[j])
                    statement = false;
		}

		if (statement)
            return statement;
	}
	return false;
}
