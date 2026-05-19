//Optimal , TC- o(n^2)
class Solution {
public:
     
                                          //This function will genarate a single row ,whichever you want to print
     vector <int> generateRow(int row) {
     long long ans =1;
     vector <int> ansRow;
     ansRow.push_back(1);

     for(int col=1;col<row;col++){
           ans = ans*(row-col);
           ans = ans/(col);

           ansRow.push_back(ans);

        }
        return ansRow;
    }

                                               //This function will print all the rows by calling the generate row function
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;

        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;

    }
};