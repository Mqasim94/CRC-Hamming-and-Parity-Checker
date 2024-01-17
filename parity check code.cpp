#include<iostream>
using namespace std;
int main()
{
	int m=0,n,value=0,o;
	cout<<"please Enter an integer number :  ";
	cin>>n;
	int rem[100];
	while (n>0)
	{
		rem[m]=n%2;
		n=n/2;
		m++;
	}
	cout<<endl;
	cout<<"Binary number is as follows:  ";
	for(o=m-1;o>0;o--)
	{
		cout<<rem[o]  ;
		
		if(rem[o]==1)
		{
			value++;
		};
	}
	if(value%2==0)
	{
	//	cout<<"\n  it is an even parity"<<endl;
	//	cout<<"add a '0' ";
		cout<<" \n       it is an odd parity"<<endl;
      	cout<<"add a '1' ";
	}
	else
	{
	//cout<<" \n       it is an odd parity"<<endl;
  	//    	cout<<"add a '1' ";
	cout<<"\n  it is an even parity"<<endl;
		cout<<"add a '0' ";
	}
		cout<<endl;
	cout<<"Muhammad Qasim\n";
	cout<<"SWEN19111094(6B)\n";
	cout<<"Even Parity code in DEV C++\n";
}
