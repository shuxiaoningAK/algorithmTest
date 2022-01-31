#include <bits/stdc++.h>

using namespace std;


int main() {

    int k;
    scanf("%d", &k);

    double sum = 0;
    int i = 1;
    int count = 0;
    while (sum < (double)k) {
        count ++;
        sum += 1 / (double)i;
        i++;
    }

    printf("%d", count);
}