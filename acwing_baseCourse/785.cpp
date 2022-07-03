#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>

using namespace std;

const int N = 100010;
int q[N];

void quick_sort(int q[], int l, int r) {
    if (l >= r) return ;

    int x = q[(l + r) >> 1];

    int i = l - 1, j = r + 1;

    while (i < j) {
        while (q[++ i] < x);
        while (q[-- j] > x);
        if (i < j) swap(q[i], q[j]);
    }

    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> q[i];

    quick_sort(q, 0, n - 1);

    for (int i = 0; i < n; i++) cout << q[i] << " ";


    return 0;
}