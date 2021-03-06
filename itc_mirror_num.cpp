#include "middle.h"


long long itc_abs(long long num){
    if (num >= 0) return num;
    return -num;
}


double itc_pow(long long num, long long n){
    if (n == 0) return 1;
    long long res = num;
    for (int i=1; i < itc_abs(n); i++){
        res *= num;
    }
    if (n >= 0) return res;
    return 1.0 / res;
}


bool itc_mirror_num(long long number){
    if (number < 0) number = -number;
    if (number == 0) return true;
    if (number % 10 == 0) return false;
    int res = 0;
    int oldnum = number;
    for (int i = itc_len_num(number) - 1; i >= 0; i--){
        res += number % 10 * itc_pow(10, i);
        number = (number - number % 10) / 10;
    }
    return (res == oldnum);
}
