#include <iostream>
#include <unordered_set>
#include <string>
#include <map>

using namespace std;
int main()

{
    multimap<int, string> map0;
    string str;
    while (getline(cin, str)) {
        int key = stoi(str.substr(0, str.find(" ")));
        string value = str.substr(str.find(" ") + 1);
        map0.insert(make_pair(key, value));

    }
    map <int, string> ::iterator it = map0.begin();
    for (int i = 0; it != map0.end(); it++, i++) {
        cout << it->first << " " << it->second << endl;
    }
}