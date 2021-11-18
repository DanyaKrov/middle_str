#include "middle_str.h"

string itc_maxCharWord(string str)
{
    bool issp = false;
    long long max = -1, length = 0;
    string word = "";
    string ans = "";
    int kol = 0;
    if (str == "")
        return "error";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
        {
            word += str[i];
            length ++;
        }
        else
        {
            if (max < length && str[i] == ' '){
                issp = true;
                ans = word;
                max = length;
            }
            if (length > 0)
                kol++;
            length = 0;
            word = "";
        }
    }
    if (!issp)
        return "error";
    if (length > 0)
        kol++;
    if (kol < 2)
        return "error";
    if (max < length)
        ans = word;
    return ans;
}
