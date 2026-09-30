
#include<bits/stdc++.h>
using namespace std;
//1.factorial of n
int fact(int n)
{
  if(n==0)
  {
    return 1;
  }
  return n*fact(n-1);
}
//reverse an array[2 pointer]
void reverseArray(int arr[],int l,int r)
{
    if(l>=r)//here if we use l == r then it will not work of even-number array
    {
        return;
    }
    swap(arr[l],arr[r]);
    reverseArray(arr,l+1,r-1);
}

int main()
{
 int n;
 cout<<"enter a number you want factorial of:";
 cin>>n;
 cout<<fact(n)<<"\n";
 int arr[] = {1,2,3,4,5};
 reverseArray(arr,0,4);
 for(int i=0;i<5;i++)
 {
    cout<<arr[i]<<" ";
 }
}
