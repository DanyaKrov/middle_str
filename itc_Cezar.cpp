#include "middle_str.h"

string itc_Cezar(string str, int k)
{
    long long length = 0, param = 97;
    string word = "";
    if (str == "")
        return "error";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if ((65 <= str[i] && str[i] <= 90) || (97 <= str[i] && str[i] <= 122))
        {
            param = 97;
            if (65 <= str[i] && str[i] <= 90)
                param = 65;
            if (str[i] - param + k >= 0)
                word += param + (str[i] - param + k) % 25;
            else
                word += param + 25 - (25 + param - str[i]) % 25;
            length ++;
        }
        else
        {
            word += str[i];
            length = 0;
        }
    }
    return word;
}
