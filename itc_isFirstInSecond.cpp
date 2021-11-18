#include "middle_str.h"


bool itc_isFirstInSecond(string s1, string s2)
{
    bool statement = false;
    long long length = 0;
    if (s1 == "" || s2 == "")
        return 0;
    for (long long i = 0; s2[i] != '\0'; i++)
    {
        if (s1[length] == s2[i])
        {
            length ++;
        }
        else
        {
            statement = (length == itc_len(s1));
            length = 0;
        }
    }
    statement = (length == itc_len(s1));
    return statement;
}
