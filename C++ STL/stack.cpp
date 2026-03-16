#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> st;

    st.push(1);
    st.push(2);
    st.emplace(3);

    cout << st.top() << endl;

    st.pop();

    cout << st.top() << endl;

    cout << st.size() << endl;

    cout << st.empty() << endl;

    stack <int> st1, st2;
    st1.push(10);
    st2.push(20);
    st1.swap(st2); // swap stack

    cout << st1.top() << endl;
    cout << st2.top() << endl;

}