#include "middle_str.h"

long long itc_len(string str){
    if (str == "")
        return 0;
    int kol = 0;
    while (str[kol] != '\0'){
        kol += 1;
    } return kol;
}
