//TC- o(n) * O(n) = O(n^2)
class Solution {
  public:
  
  bool ls(vector<int>& arr, int x){
      for(int i=0;i<arr.size();i++){
          if(arr[i]==x)
          return true;
      }
      return false;
  }
    int longestConsecutive(vector<int>& arr) {
        
        int n=arr.size();
        int longest = 0;
        
        
        for(int i=0;i<n;i++){
          int  x=arr[i];
           int count = 1;
            
            while(ls(arr,x+1)==true){
                x++;
                count++;
            }
            longest=max(longest,count);
        }
        
       return longest; 
    }
};

    //better solution -- TC = O(n log n)+o(n)

 class Solution {
	public:
	int longestConsecutive(vector<int>& arr) {
		
		int n = arr.size();
		int longest = 1;
		int lastSmaller = INT_MIN;
		int count = 0 ;
		sort(arr.begin(), arr.end());
		
		for (int i = 0; i<n; i++) {
		    
		    if(arr[i] == lastSmaller){
		        continue;
		    }
			else if (arr[i]-1 == lastSmaller) {
				count++;
				lastSmaller = arr[i];
			}
			else {
				count = 1;
				lastSmaller = arr[i];
			}
			longest = max(longest, count);
		}
		
		return longest;
	}
	
};


//optimal solution  - TC = o(n) 
class Solution {
	public:
	int longestConsecutive(vector<int>& arr) {
		
		int n = arr.size();
		unordered_set <int> st;
		int longest = 1;
		
		for(int i=0;i<n;i++){
		    st.insert(arr[i]);
		}
		
		for(auto it : st){
		    if(st.find(it-1)==st.end()){
		       int count=1;
		       int x =it;
		       
		       while(st.find(x+1)!=st.end()){
		           count++;
		           x++;
		       }
		       longest = max(longest,count);
		    }
		    
		}
		 return longest;
	}
	
};
