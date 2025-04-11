#include <bits/stdc++.h>
using namespace std;
int main() {
    set<int> numbers;
    numbers.insert(1);
    numbers.insert(12);
    numbers.insert(1);
    numbers.insert(1);
    numbers.insert(13);
    numbers.insert(1);
    numbers.insert(15);
    for (int x : numbers){
        cout << x << " ";
    }cout << endl;
    return 0;
}
