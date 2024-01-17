#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10],q[10],r[10],s0,s1,s2,s,c1,c2,c3,p;
	cout<<"Enter the 4 bits "<<endl;
	cin>>a[1];
	cin>>a[2];
	cin>>a[3];
	cin>>a[4];
	r[1]=(a[1]+a[2]+a[3])%2;
   	r[2]=(a[2]+a[3]+a[4])%2;
	r[3]=(a[1]+a[2]+a[4])%2;
	cout<<endl;   
     cout<<a[4]<<endl;
     cout<<a[3]<<endl;
     cout<<a[2]<<endl;
     cout<<a[1]<<endl;
    for(int i=1;i<4;i++)
    	cout<<"\t"<<r[i];
    	cout<<"\nEnter the 7 bits "<<endl;
    	for(int i=1;i<8;i++)
    	{	
    	cin>>b[i];
}
      s0 = (b[1] + b[2] + b[3] + r[1])%2;
    cout<<"S ="<<s0;
    s1 = (b[2] + b[3] + b[4] + r[2])%2;
    cout<<s1;
    s2 = (b[1] + b[2] + b[4] + r[3])%2;
    cout<<s2;
   s = s0 + s1 + s2;

	if(s==0)
	{
		cout<<"\n there is no error";
	}
	else{
		cout<<"\nthere is error in the postion\n"<<p;
		if (b[p]==0)
		b[p]=1;
		else
		b[p]=0;
		for(int i=1;i<8;i++)
		cout<<"\t"<<b[i];
	}
	
		s=s0*1+s1*2+s2*4;
	if(s==0)
	{
		cout<<"\n there is no error";
	}
	else{
		cout<<"\nthere is error in the postion\n"<<s;
		if (b[s]==0)
		b[s]=1;
		else
		b[s]=0;
		for(int i=1;i<8;i++)
		cout<<"\t"<<b[i];	
	}
		cout<<endl;
	cout<<"Muhammad Qasim\n";
	cout<<"SWEN19111094(6B)\n";
	cout<<"Hamming code in DEV C++\n";

}
