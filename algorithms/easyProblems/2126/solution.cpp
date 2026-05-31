class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end(), greater<int>());
        long ma = mass;
        for(int i = 0; i < asteroids.size(); i++){
            ma += asteroids[i];
        }

        for(int i = 0; i < asteroids.size(); i++){
            ma -= asteroids[i];
            if(ma < asteroids[i]) return false;
             
        }
        return true;
    }
};
