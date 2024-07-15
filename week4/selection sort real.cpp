#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"enter numbers:";
cin>>n;
cout<<endl;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
//SELECTION SORT
/*
for(int i=0;i<n-1;i++)
{ int min=i;
    for(int j=i;j<=n-1;j++)
    {
        if(arr[min]>arr[j])
            min=j;
    }

    swap(arr[min],arr[i]);
}

//SELECTION SORT FOR MAX NUMBER AND PUSHING IT TOWARDS THE END
int i,j;
for(i=0;i<n-1;i++)
{ int maxx=n-1-i;
    for(j=0;j<=n-1-i;j++)
    {
        if(arr[maxx]<arr[j])
            maxx=j;
    }
    swap(arr[maxx],arr[n-1-i]);
}

//BUBBLE SORT
for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
    }
}

//INSERTION SORT

for(int i=1;i<=n-1;i++)
{
  int   j=i;
    if(arr[j-1]>arr[j])
        swap(arr[j-1],arr[j]);
}

*/
cout<<"the sorted elements are:";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}






}
