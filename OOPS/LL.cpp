#include <iostream>
using namespace std;

class LL {

  public :
    int data;
    LL* next;

    // void insert( LL* head, int value){
    //     LL* newNode = new LL();
    //     newNode->data = value;
    //     newNode->next = NULL;

    //     if(head == NULL){
    //         head = newNode;
    //     }
    //     else{
    //         LL* temp = head;
    //         while(temp->next != NULL){
    //             temp = temp->next;
    //         }
    //         temp->next = newNode;
    //     }
    // }

     

};

int main(){
     
   LL* first = new LL();
   LL* second = new LL();

   first->data = 1;
   first->next = second;

   second->data = 2;
   second->next = NULL;
    

}