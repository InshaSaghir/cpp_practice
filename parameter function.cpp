#include<iostream>
using namespace std;
void Add(int a,int b);
int main()
{
	int v1,v2;
	cout<<"please enter vaule v1, v2"<<endl;
	cin>>v1>>v2;
	Add(v1,v2);
}
void Add(int a,int b)
{
	cout<<a+b;
}
