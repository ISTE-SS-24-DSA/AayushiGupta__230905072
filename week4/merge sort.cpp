//MERGE SORT
#include <iostream>
#include <vector>

using namespace std;
void merg(vector <int> &arr,int low,int mid,int high)
{
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }

}

void mS(vector <int> &arr,int low,int high)
{
    if(low>=high) return;
    int mid=(low+high)/2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merg(arr,low,mid,high);

}

int main(){
cout<<"enter the no of elements:";
int n;
cin>>n;
cout<<"Enter the elements: ";
vector <int> arr;
for(int i=0;i<n;i++)
{  int N;
    cin>>N;
    arr.push_back(N);
}




mS(arr,0,n-1);

cout<<"the sorted elements are:";

for(auto it:arr)
{
    cout<<it<<" ";
}








}
