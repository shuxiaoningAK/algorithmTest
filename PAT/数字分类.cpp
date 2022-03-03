/*
给定一系列正整数，请按要求对数字进行分类，并输出以下5个数字：
 A1 = 能被5整除的数字中所有偶数的和；
 
 A2 = 将被5除后余1的数字按给出顺序进行交错求和，即计算n1-n2+n3-n4...；
 
 A3 = 被5除后余2的数字的个数；
 
 A4 = 被5除后余3的数字的平均数，精确到小数点后1位；
 
 A5 = 被5除后余4的数字中最大数字。


每个输入包含1个测试用例。
每个测试用例先输入一个不超过1000的正整数N。
然后给出N个不超过1000的待分类的正整数。数字间以空格分隔。

对给定的N个正整数，按题目要求计算A1~A5并在一行中顺序输出。数字间以空格分隔，但行末不得有多余空格。
若其中某一类数字不存在，则在相应位置输出“N”。
*/


#include <bits/stdc++.h>

using namespace std;

const int N = 1010;

int q[N];

int A[6] ={0};

int main() {


    int n,tmp, val = 0;
    bool flag = true, flag1 = false, flag2 = false;
    cin >> n;
    int maxv = 0;

    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }

    for (int i = 0; i < n; i++) {
        tmp = q[i] % 5;

        if (tmp == 0 && q[i] % 2 == 0) A[1] += q[i];
        if (tmp == 1) {
                flag1 = true;
            if (flag == true) {
                A[2] += q[i];
                flag = false;
            }
            else {
                A[2] -= q[i];
                flag = true;
            }
        }

        if (tmp == 2) A[3] ++;
        if (tmp == 3) {
            A[4] += q[i];
            val ++;
        }
        if (tmp == 4) {
                flag2 = true;
            maxv = max(maxv, q[i]);
        }



    }

    if (A[1] == 0) printf("N ");
    else printf("%d ", A[1]);

    if (flag1 == false) printf("N ");
    else printf("%d ", A[2]);

    if (A[3] == 0) printf("N ");
    else printf("%d ", A[3]);

    if (val == 0) printf("N ");
    else printf("%.1f ", (double)A[4] / val);

    if (flag2 == false) printf("N");
    else printf("%d", maxv);

    return 0;

}
