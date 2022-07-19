

void quick_sort(int q[], int l, int r) {
    if (l >= r) return ;

    int x = q[l + r >> 1], i = l - 1, j = r + 1;
    while (i < j) {
        while (q[++ i] < x);
        while (q[-- j] > x);
        if (i < j) swap(q[i], q[j]);
    }

    quick_sort(q, l, i);
    quick_sort(q, i + 1, r);
}