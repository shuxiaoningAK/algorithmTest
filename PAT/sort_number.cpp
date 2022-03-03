//wei wancheng 

#include <bits/stdc++.h>

using namespace std;

const int N = 1010;

int n;
int q[N];
int score[6] = {0};
int main() {

    cin >> n;
    double x;
    int maxval = 0, flag = 0;
    for (int i = 0; i < n; i++) cin >> q[i];


    for (int i = 0; i < n; i++) {
        if (q[i] % 5 == 0 && q[i] % 2 == 0) score[1] += q[i];
        if (q[i] % 5 == 1) {
            if (flag == 0) {
                score[2] += q[i];
                flag = 1;
            }
            else score[2] -= q[i];
        }
        if (q[i] % 5 == 2) score[3] ++;
        if (q[i] % 5 == 3) { score[4] ++; x += q[i];
        if (q[i] % 5 == 4) {
            if (q[i] >= maxval)
                maxval = q[i];
        }
    }

    if (score[1] == 0) printf("N ");
    else printf("%d ", score[1]);


}