#include "middle_str.h"

bool itc_isIp(string str)
{
    int kol = 0;
    int num = 1;
    if (str == "")
        return "error";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            num = 10 * num + str[i] - 48;
        else
        {
            if (str[i] != 46)
                return false;
            if (num == 0)
                return false;
            if ((num % 1000) > 255 || (num % 1000) < 0)
                return false;
            kol++;
            num = 1;
        }
    }
    if (num == 0)
        return false;
    if ((num % 1000) > 255 || (num % 1000) < 0)
        return false;
    kol++;
    if (kol != 4)
        return false;
    return true;
}
