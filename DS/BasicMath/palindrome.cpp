class Solution {
public:
    bool isPalindrome(int x) {
        int revN=0;
        int dup=x;
        while (x>0){
            int lastdigit=x%10;
            x=x/10;
           
            if (revN > INT_MAX / 10 || revN < INT_MIN / 10)
                return 0;
           revN=(revN*10)+lastdigit;
            
        }
           return dup==revN; 
          
    }
};