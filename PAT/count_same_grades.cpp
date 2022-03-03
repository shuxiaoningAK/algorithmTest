#include <bits/stdc++.h>

using namespace std;


const int N = 100010;
int q[N];
int main() {
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        q[x] ++;
    }
    int m, y;
    scanf("%d", &m);
    while (m --) {
        scanf("%d", &y);
        printf("%d ", q[y]);
    }

    return 0;
}