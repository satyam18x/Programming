class Solution {
public:
    bool isArmstrong(int x) {

        int dup=x;  
        int sum = 0;

        while (x > 0) {

            int lstdgt = x % 10;
            sum = sum + (lstdgt*lstdgt*lstdgt);
            x = x / 10;

        }

        return dup==sum;
    }
};
