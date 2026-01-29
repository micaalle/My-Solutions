class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ret;

        ret.push_back(celsius + 273.15);
        ret.push_back(celsius * 1.80 + 32.00);
        return ret;
    }
};
