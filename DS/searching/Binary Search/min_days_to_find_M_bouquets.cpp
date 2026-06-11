//Brute force 
class Solution {
public:

    int possible(vector<int>& arr,int day, int m, int k){

        int count=0, no_of_bouq = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day){
                count++;
            }
            else{
                no_of_bouq += (count/k);
                count=0;
            }
        }
        no_of_bouq += (count/k);

        if(no_of_bouq>=m)           // or just [return no_of_bouq >=m;]  and write bool in top instead of int
         return true;
        else
         return false;

    }
    int minDays(vector<int>& bloomDay, int m, int k) {

        if(1LL*m*k > bloomDay.size())
        return -1;

        int mini = *min_element(bloomDay.begin(),bloomDay.end());
        int maxi = *max_element(bloomDay.begin(),bloomDay.end());

        for(int day=mini;day<=maxi;day++){
            if(possible(bloomDay,day,m,k))
            return day;
        }
        return -1;
    }
};

//optimal using binary search