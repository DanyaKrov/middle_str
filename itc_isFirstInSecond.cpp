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
    if(s1 == "" || s2 == "")
        return false;
    if(itc_len(s1) > itc_len(s2))
        return false;
    long long l1 = itc_len(s1), l2 = itc_len(s2), ans = 0;
    bool statement = true;
    for (int _ = 0; _ < l2; _++)
    {
        if(s1[0] == s2[_])
        {
            while (11 > ans)
            {
                if (!(s2[_ + ans] == s1[ans]))
                {
                    statement = 0;
                }
                ans ++;
            }
            if (statement)
                return statement;
        }
        statement = true;
    }
    return false;
}
