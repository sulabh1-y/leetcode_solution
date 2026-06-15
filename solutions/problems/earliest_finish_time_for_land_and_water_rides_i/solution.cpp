class Solution {
public:
   int FinishTime(vector<int>& FirstRideStart,
               vector<int>& FirstRideEnd,
               vector<int>& SecondRideStart,
               vector<int>& SecondRideEnd){

    int n = FirstRideStart.size();
    int m = SecondRideStart.size();

    int ans = INT_MAX;

    for(int i = 0; i < n; i++){
        int FirstRideTime =
            FirstRideStart[i] + FirstRideEnd[i];

        for(int j = 0; j < m; j++){
            int finishTime =
                max(FirstRideTime, SecondRideStart[j])
                + SecondRideEnd[j];

            ans = min(ans, finishTime);
        }
    }

    return ans;
}
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        return min(FinishTime(landStartTime,landDuration, waterStartTime,waterDuration),FinishTime(waterStartTime,waterDuration,landStartTime,landDuration));
    }
};