#include "middle_str.h"

long long itc_pow(int number, int number2)
{
    int num = 1;
    while (number > 0){
        num *= number2;
        number -= 1;
    }
    return num;
}
long long itc_not(long long num, int type)
{
    long long NumInTw = 0;
    int i = 0;
    while (num > type - 1){
            if (num % type != 0)
                NumInTw += (num % type) * itc_pow(i, 10);
            num /= type;
            i++;
        }
    NumInTw += num * itc_pow(i, 10);
    return NumInTw;
}
string itc_DecToBin(string str)
{
	return "smth"; //idk how to do it
}
