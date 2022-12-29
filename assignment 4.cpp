#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	cout<<"input 10 integer from the user:"<<endl;
	for(int i=0;i<10;i++)
	cin>>arr[i];
	cout<<"integer in original order:"<<endl;
	for(int i=0;i<10;i++)
	cout<<arr[i]<<endl;
	cout<<"integer in reverse order:"<<endl;
	for(int i=9;i>=0;i--)
	cout<<arr[i]<<endl;
	return 0;
}
