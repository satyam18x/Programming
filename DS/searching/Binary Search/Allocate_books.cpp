//using Linear search
class Solution {
public:
    int CountStudents(vector<int> &arr, int pages){
        int stu=1;
        long long pagesStudent=0;

        for(int i=0;i<arr.size();i++){
            if(pagesStudent+arr[i]<=pages)
               {
                pagesStudent+=arr[i];
               }
            else{
                stu++;
                pagesStudent=arr[i];
            }   
        }
        return stu;

    }
    int findPages(vector<int> &nums, int m)  {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);

        for(int pages=low;pages<=high;pages++){
            if(CountStudents(nums,pages)==m)
            return pages;
        }
        return -1;
    }
};


//binarySearch
class Solution {
public:
    int CountStudents(vector<int> &arr, int pages){
        int stu=1;
        long long pagesStudent=0;

        for(int i=0;i<arr.size();i++){
            if(pagesStudent+arr[i]<=pages)
               {
                pagesStudent+=arr[i];
               }
            else{
                stu++;
                pagesStudent=arr[i];
            }   
        }
        return stu;

    }
    int findPages(vector<int> &nums, int m)  {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);

       while(low<=high){
        int mid = (low+high)/2;
            if(CountStudents(nums,mid)>m){
               low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        return low;
    }
};