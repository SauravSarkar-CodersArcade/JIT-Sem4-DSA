#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, string> stateLanguages;
    stateLanguages.insert
    (pair<string,string>("Karnataka", "Kannada"));
    stateLanguages.
    insert(pair<string,string>("Kerala", "Malayalam"));
    stateLanguages.
    insert(pair<string,string>("Bihar", "Bhojpuri"));
    stateLanguages.
    insert(pair<string,string>("Goa", "Konkani"));
    stateLanguages.
    insert(pair<string,string>("Assam", "Assamese"));
    stateLanguages["West Bengal"] = "Bengali";
    // stateLanguages.clear(); Deletes everything
    // stateLanguages.erase("West Bengal");
    // Traversal :
    for (auto it : stateLanguages){
        cout << "State: " << it.first << ", Language: "
        << it.second << endl;
    }
    return 0;
}
