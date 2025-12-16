class ProductOfNumbers {
public:
    vector<int> prod;
    ProductOfNumbers() {}
    
    void add(int num) {
        if (num == 0) prod.clear();
        else prod.push_back(num * (prod.empty() ? 1 : prod.back()));
    }
    
    int getProduct(int k) {
        int n = prod.size();
        if (n == 0 || k > n) return 0;
        if (k == n) return prod.back();
        return prod[n-1] / prod[n - k - 1];
    }
};
