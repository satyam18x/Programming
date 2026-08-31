#include <iostream>
using namespace std;

class Task{

    private:

    int id;
    string assigned_by;
    string report_to;
    int tentative_time;
    int actual_time;
    int difference;
    bool priority_level;
    
    public:
    Task(int id, string assigned_by, string report_to, int tentative_time, int actual_time, int difference, bool priority_level){
        this->id = id;
        this->assigned_by = assigned_by;
        this->report_to = report_to;
        this->tentative_time = tentative_time;
        this->actual_time = actual_time;
        this->difference = difference;
        this->priority_level = priority_level;
    }

    void getdata(){
        cout << "Enter the id : ";
        cin >> id;  
        cout << "Enter the assigned by : ";
        cin >> assigned_by;
        cout << "Enter the report to : ";
        cin >> report_to;
        cout << "Enter the tentative time : ";
        cin >> tentative_time;
        cout << "Enter the actual time : "; 
        cin >> actual_time;
        cout << "Enter the difference : ";
        cin >> difference;
        cout << "Enter the priority level (1 for high, 0 for low) : ";
        cin >> priority_level;
    }
    
    void display(){
        cout << "Id : " << id << endl;
        cout << "Assigned by : " << assigned_by << endl;
        cout << "Report to : " << report_to << endl;
        cout << "Tentative time : " << tentative_time << endl;
        cout << "Actual time : " << actual_time << endl;
        cout << "Difference : " << difference << endl;
        cout << "Priority level : " << priority_level << endl;
    }
    void manager(){
        if(priority_level == 1){
            cout << "This task is of high priority." << endl;
        }
        else{
            cout << "This task is of low priority." << endl;
        }
    }
    

};

int main(){

   int id;
   Task* T[100];
   cin >> id;

   T[0]= new Task();
   T[0]->getdata();
   T[1]= new Task();
   T[1]->getdata();

   T[0]->display();
   T[1]->display();

}
