class Solution {
public:
    int earliestFinishTime(vector<int>& landS, vector<int>& landD, vector<int>& waterS, vector<int>& waterD) {
        int minLand = INT_MAX;
        int minWater = minLand, ret = minLand;
        
        for(int i = 0; i < landS.size(); i++){
            if(landS[i] + landD[i] < minLand) minLand = landS[i] + landD[i];
        }

        for(int i = 0; i < waterS.size(); i++){
            if(waterS[i] + waterD[i] < minWater) minWater = waterS[i] + waterD[i];
            ret = min(ret, max(minLand, waterS[i]) + waterD[i]);
        }

        for(int i = 0; i < landS.size(); i++){
            ret = min(ret, max(minWater, landS[i]) + landD[i]);
        }

        return ret;
    }
};
