#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.emplace(3);

    cout << q.front() << endl;

    q.pop();

    cout << q.front() << endl;

    cout << q.size() << endl;

    cout << q.empty() << endl;

}