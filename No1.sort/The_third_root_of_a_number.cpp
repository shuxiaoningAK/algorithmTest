/*
* @Author: shuxiaoningAK
* @Date: 2022-01-25 12:00
*/


#include <bits/stdc++.h>

using namespace std;

int mian() {
    double n;
    scanf("%lf", &n);

    double l = 0, r = n;

    while (r - l > 1e-8) {
        double mid = (l + r / 2);
        if (mid * mid *mid >= n) r = mid;
        else l = mid;
    }
    printf("%lf", l);
    return 0;
}

