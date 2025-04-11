#include <bits/stdc++.h>
using namespace std;
int main() {
    forward_list<int> fList = {10,20,30};
    fList.push_front(5);
    fList.push_front(0);
    for (auto x : fList){
        cout << x << " ";
    }cout << endl;
    // auto -> iterator -> used to traverse STL Libraries
    for (auto it = fList.begin(); it != fList.end();
    ++it){
        cout << *it << " ";
    }cout << endl;
    // What is the auto keyword replacing in the looping statement
    for (forward_list<int>::iterator it = fList.begin();
    it != fList.end(); ++it){
        cout << *it << " ";
    }cout << endl;
    auto it = fList.begin();
    while (next(it) != fList.end()){
        ++it;
    }
    fList.insert_after(it, 50);
    for (auto x : fList){
        cout << x << " ";
    }cout << endl;
    fList.insert_after(++it, 40);
    for (auto x : fList){
        cout << x << " ";
    }cout << endl;
    return 0;
}
