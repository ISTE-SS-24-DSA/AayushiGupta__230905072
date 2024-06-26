#include <iostream>

using namespace std;

int print(int n){
static int i=1;
if(i==n+1)
    return 0;
 cout<<i<<" ";
 i++;
 return print(n);


}

int fibonacci(int N)
{
 if (N == 1)
        return 0;
    if (N == 2)
        return 1;

    return fibonacci(N - 1) + fibonacci(N - 2);

}

int Sum(int N)
{ static int sum=0;
if(N==0)
    return sum;
else
{
    sum+=N;
    return Sum(N-1);
}
}

bool Pal(string str,int start, int end)
{
    if (start >= end)
        return true;
    if (str[start] != str[end])
        return false;
    return Pal(str, start + 1, end - 1);
}

int main()
{
    int n,N;
    string str;
    cout<<"enter number N:";
    cin>>n;
    cout<<"the numbers from 1 to "<<n<<" are:";
    print(n);
    cout<<endl<<"Give an integer N for fibonacci series and sum: ";
    cin>>N;
    cout<<"Ans is: "<<fibonacci(N);
    cout<<endl<<"The sum is: ";
    cout<<Sum(N);
    cout<<endl<<"Enter a string: ";
    cin>>str;
    if(Pal(str,0,str.length()-1))
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

}
