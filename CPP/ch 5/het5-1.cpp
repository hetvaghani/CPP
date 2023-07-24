#include<iostream>
using namespace std;

class calculate
{
	public :
		void sum(int a,int b)
		{
			cout<<"division of "<<a<<"/"<<b<<"="<<a/b<<endl;
		}
		
		void sum(int a,int b,int c)
		{
			cout<<" subtraction of "<<a<<"-"<<"b"<<"="<<a-b-c<<endl;
		}
		
		void sum(int a,int b,int c,int d)
		{
			cout<<"multiplication of "<<a<<"*"<<"b"<<"="<<a*b*c*d<<endl;
		}
		
		void sum(int a,int b,int c,int d,int e)
		{
			cout<<"additionof "<<a<<"+"<<"b"<<"="<<a+b+c+d+e<<endl;
		}
};
 
int main()
 
 {
 	calculate C;
 
 	C.sum(50,5);
}
