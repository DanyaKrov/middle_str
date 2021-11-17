#include "middle_str.h"

string itc_maxCharWord(string str)
{
    long long max = -1, length = 0;
    string word = "";
    string ans = "";
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
            if (max < length)
                ans = word;
            length = 0;
            word = "";
        }
    }
    if (max < length)
        ans = word;
    return ans;
}
