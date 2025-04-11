#include <bits/stdc++.h>
using namespace std;
int main() {
    list<int> lst1; // Default Constructor
    list<int> lst2(3,10);  // Parameterised Constructor
    list<int> lst3(lst2); // Copy Constructor
    lst1.push_back(10); // 15 15 10
    lst1.push_front(20);
    lst1.insert(++lst1.begin(), 15);
    for (int i : lst1) {
        cout << i << " ";
    }cout << endl;
    for (list<int>::iterator it = lst1.begin(); it != lst1.end();
    ++it){
        cout << *it << " ";
    }cout << endl;
    for (list<int>::reverse_iterator it = lst1.rbegin(); it != lst1.rend();
         ++it){
        cout << *it << " ";
    }cout << endl;
    return 0;
}
