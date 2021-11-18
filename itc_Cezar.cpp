#include "middle_str.h"

string itc_Cezar(string str, int k)
{
    string word = "";
    if (str == "")
        return "error";
    for (long long i = 0; str[i] != '\0'; i++)
    {
        if (65 <= str[i] && str[i] <= 90)
		{
			word += (str[i] - 65 + ((k % 26 + 26) % 26)) % 26 + 65;
		}
        else if (str[i] >= 97 && str[i] <= 122)
        {
			word += (str[i] - 97 + ((k % 26 + 26) % 26)) % 26 + 97;
		}
		else
            word += str[i];
	}
	return word;
}
