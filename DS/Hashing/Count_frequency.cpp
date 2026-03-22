// #include <iostream>
// using namespace std;

// int main(){

//     int n;
//     cout <<"enter size of array : ";
//     cin>>n;

//     int arr[n];
//     int i;

//     cout<<"enter the array of size " << n << " : ";

//     for(i=0;i<n;i++){
        
//         cin >> arr[i];
//     }

//     //precompute
//     int hash[13]={0};   //create a has array initialize all values to zero;
//      for(i=0;i<n;i++){   //index shows number, value shows frequency
//         hash[arr[i]]+=1;
//     }      
    
//     //Queries = means for how many numbers amd what numbers you want the frequency ,, from the array or outside the array

//     int q;
//     cout <<"Enter how many numbers you want to check frequncy of : ";
//     cin >> q;
    
//     cout <<"Enter numbers you want to check frequncy of : ";
//     while(q--) {
//     int number;
//     cin >> number;
   
//     //fetch frequency
//     cout << hash[number] << endl;
//     }
    

// }

//simple code of counting frequency of a number without hashing

#include <iostream>
using namespace std;

int freq(int number, int arr[] ,int n){
           
    int count=0,i;
    for (i=0;i<n;i++){
        if(arr[i]==number)
           count++;
        }

        return count;
}

int main(){

    int n,i;
    cout<< "enter size of array : ";
    cin>> n;
   
     int arr[n];
    cout << "enter an array of size " <<n << " : ";
    for(i=0;i<n;i++){
        
        cin >> arr[i];
    }
  
    int number;
    cout <<"enter the number you want the freq of : ";
    cin>>number;

   

  int result =  freq(number , arr,n);

  cout << "frequency of the number " << number << " is : " << result;

   return 0;


  
}
    