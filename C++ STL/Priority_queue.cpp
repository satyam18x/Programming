#include <iostream>
#include <queue>

using namespace std;

int main(){

    //Max heap

    priority_queue<int> pq;

    pq.push(1);
    pq.push(5);
    pq.emplace(3);
                                    // 5 will be at top because it is the largest element, no matter in which order we have inserted the element
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    cout << pq.empty() << endl;

    //Min heap
    priority_queue<int, vector<int>, greater<int>> pq_min;
    pq_min.push(1);
    pq_min.push(5); 
    pq_min.emplace(3);
                                    // 1 will be at top because it is the smallest element, no matter in which order we have inserted the element
    cout << pq_min.top() << endl;
    pq_min.pop();
    cout << pq_min.top() << endl;
    cout << pq_min.size() << endl;
    cout << pq_min.empty() << endl;



}