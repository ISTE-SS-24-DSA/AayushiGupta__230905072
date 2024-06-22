#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> vec;

    cout << "Enter integers to insert into the vector (enter -1 to stop):\n";
    int num;
    while (true) {
        cin >> num;
        if (num == -1)
            break;
        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());

    cout << "Sorted vector: ";
    for (auto it:vec) {
        cout << it << " ";
    }
    cout << endl;


    reverse(vec.begin(), vec.end());


    cout << "Reversed sorted vector: ";
    for (auto it:vec) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}

