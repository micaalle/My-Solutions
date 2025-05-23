int divide(int dividend, int divisor) {
    int ret = 0;
    int ori = dividend;
    
    if (divisor == INT_MIN) {
        return dividend == divisor;
    }

    if (dividend == INT_MIN) {
        if (divisor == 1) {
            return INT_MIN;
        } else if (divisor == -1) {
            return INT_MAX;
        } else {
            dividend += abs(divisor), ret++;
        }
    }

    int a = abs(dividend), b = abs(divisor);
    while (a >= b) {
        int tmp = b, multiple = 1;
        while (tmp <= (INT_MAX >> 1) && (tmp << 1) <= a) {
            tmp <<= 1;
            multiple <<= 1;
        }
        a -= tmp;
        ret += multiple;
    }

    if ((ori < 0) ^ (divisor < 0)) {
        return -ret;
    }
    return ret;
}
