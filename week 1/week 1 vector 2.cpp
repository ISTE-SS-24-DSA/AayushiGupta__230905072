#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector <int> vec(5,100);
    vec.push_back(30);
    vec.push_back(40);
     cout << "Vector elements using iterator: ";
    for(vector <int>:: iterator it = vec.begin();it!=vec.end();it++)
{
    cout<<*it<<" ";
}

cout<<endl << "Vector elements in reverse using reverse iterator: ";
for(auto rit = vec.rbegin(); rit != vec.rend(); ++rit)
{
    cout<<*rit<<" ";
}
cout<<endl;
}


