#include <iostream>
#include <algorithm>


using namespace std;

int reverse(int n)
{ int sum=0;
int rem;
    while (n!=0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    return sum;
}

void prime(int n)
{ int flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag++;
        }
    }
    if (flag==0)
    {
        cout<<"prime";

    }
    else cout<<"composite";
}

void pattern1()
{ int i;
int k=1;
int j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;

    }
}

void pattern2()
{ int i,j,k;

int spaces;


    for(i=1;i<=5;i++)
    {
        for(spaces=5;spaces>i;spaces--)
        {
            cout<<" ";
        }




        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }


            for(k=1;k<i;k++)
            {
                cout<<"*";
            }
            cout<<endl;


    }
}


int main()
{
    cout<<"Welcome to ISTE Summer School"<<endl;
    int n;
    cout<<"enter a no:";
    cin>>n;
    cout<<"Reverse of the entered no is: "<<reverse(n)<<endl;
    cout<<"The no you entered is: ";
    prime(n);
    cout<<endl<<"PATTERN 1 IS:"<<endl;
    pattern1();
    cout<<endl<<"PATTERN 2 IS:"<<endl;
    pattern2();
    cout<<endl;

    int n1;
    cout<<"what are the no of elements you want to have in your array? ";
    cin>>n1;
    cout<<endl<<"enter the elements: ";
    int g;
    int arr[n1];

    for(g=0;g<n1;g++)
    {
        cin>>arr[g];
    }


     int maxi = *max_element(arr,arr+n1);

cout<<"the largest element of the array is: "<<maxi;




}

