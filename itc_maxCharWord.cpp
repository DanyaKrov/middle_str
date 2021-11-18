#include "middle_str.h"

string itc_maxCharWord(string str)
{
    if (itc_countWords(str) < 2 || str == "")
        return "error";
    bool issp = false;
    long long max = -1, length = 0;
    string word = "";
    string ans = "";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
        {
            word += str[i];
            length ++;
        }
        else
        {
            if (str[i] == ' ')
                issp = true;
            if (max < length)
            {
                max = length;
                ans = word;
            }
            length = 0;
            word = "";
        }
    }
    if (max < length)
        ans = word;
    if (!issp)
        return "error";
    return ans;
}
