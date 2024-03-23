#include <iostream>
#include <unordered_set>

using namespace std;
int main()
{
    int length;
    cin >> length;
    typedef unordered_set<int> IntSet;
    IntSet coll;
    int number = 0;
    for (int i = 0; i < length; i++) {
        cin >> number;
        coll.insert(number);

    }
    cout << coll.size();
}