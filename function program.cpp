#include<iostream>
#include<math.h>
using namespace std;
void cos();
void sin();
void tan();

int valueOne;


int main()
{
	int choice;
	cout<<"please enter your choice\n1:cos\n2:sin\n3:tan\n";
	cin>>choice;
	switch(choice)
	 {
       case 1:
    	cos();
    	    break;
        case 2:
	      sin();
		    break;
	    case 3:
		 tan();
	         break;
	   default:
	   
	   cout<<"invalid choice";
}
}
void cos()
{
	cout<<"enter valueOne";
	cin>>valueOne;
	cout<<"cos";
  }
 void sin()
 {
 	cout<<"enter valueOne";
 	cin>>valueOne;
 	cout<<"sin";
	}
  void tan()
  {
  	cout<<"enter valueOne";
  	cin>>valueOne;
  	cout<<"tan";
	 }   
