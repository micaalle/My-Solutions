long long convertToTernary(int N) {
    long long result = 0, place = 1;
    
    if (N == 0) {
        return 0;
    }
    
    while (N > 0) {
        int remainder = N % 3;
        result += remainder * place;
        place *= 10;
        N /= 3;
    }
    
    return result;
}

bool checkPowersOfThree(int n) {
    long long ret = convertToTernary(n);
    
    while (ret > 0) {
        if (ret % 10 == 2) {
            return false;  
        }
        ret /= 10;
    }
    
    return true;  
}
