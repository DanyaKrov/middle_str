#include <iostream>
#include <string>


using namespace std;
#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED


bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string S1, string S2);
long long itc_len(string str);
int itc_countWords(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string s1, string s2);
string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);
string itc_DecToBin(string str);
string itc_decToBase(int num, int base);
long long itc_not(long long num, int type);
long long itc_pow(int number, int number2);
#endif // MIDDLE_STR_H_INCLUDED
