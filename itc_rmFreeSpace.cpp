#include "middle_str.h"

string itc_rmFreeSpace(string str)
{
    if (str == "")
        return "";
    bool issp = false;
    string ans = "", s = "";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if (!issp && str[i] == 32)
        {
            issp = true;
            ans += ' ';
        }
        else if (str[i] != 32)
        {
            issp = false;
            ans += str[i];
        }
    }
    for (int i = 0; ans[i + 1] != '\0'; i++)
    {
        s += ans[i];
    }
    if (!(ans[itc_len(ans) - 1] == 32))
        s += ans[itc_len(ans) - 1];
    return s;
}
