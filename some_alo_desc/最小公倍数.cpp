

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}
int lcm(int a, int b) {
    int d = gcd(a, b);
    return a / d * b;
}



