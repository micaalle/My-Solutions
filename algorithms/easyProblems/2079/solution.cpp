class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int water = capacity;
        int ret = 0;

        for(int i = 0; i < plants.size(); i++){

            if(water < plants[i]){
                ret++;
                ret += (i * 2);
                water = capacity;
                water -= plants[i];
            } else {
                water -= plants[i];
                ret++;
            }
        }
        return ret;
    }
};
