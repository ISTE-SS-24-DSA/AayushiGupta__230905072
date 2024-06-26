#include <bits/stdc++.h>

using namespace std;

int main(){
set<int> st;
st.insert(33);
st.insert(44);
st.insert(45);
st.insert(67);

cout<<"here are the elements:";
cout<<endl;
for(auto it:st)
{
    cout<<it<<" ";
}
int key;
cout<<endl<<"Enter key:";
cin>>key;
if(st.count(key)>=1)
    cout<<"Found!";
else cout<<"Not Found!";




}
