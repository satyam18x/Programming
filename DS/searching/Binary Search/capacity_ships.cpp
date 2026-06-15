//brute force
class Solution {
public:
    int daysRequired(vector<int>& weights, int cap) {
        int days = 1;
        int load = 0;

        for (int w : weights) {
            if (load + w > cap) {
                days++;
                load = w;
            } else {
                load += w;
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        for (int cap = low; cap <= high; cap++) {
            if (daysRequired(weights, cap) <= days)
                return cap;
        }

        return low;
    }
};

//Optimal using 