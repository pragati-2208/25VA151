#include<iostream>
using namespace std;
int main(){
    
    int n;
	cin>>n;
	int temp;
	int ind;
int a[n];
int i;
for(i=0;i<n;i++)
{
    cin>>a[i];

    
}
 temp=a[0];
 ind=0;
for(i=0;i<n;i++)
{
    if(a[i]<temp)
    temp=a[i];
    ind=i;
    
}
cout<<"smallest no.is  "<<temp<<endl;
cout<<"index is "<<ind;
}