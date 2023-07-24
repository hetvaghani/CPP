#include<iostream>
using namespace std;

class number 
{
	
	public:
		double  a;
		
		public:
			
			void setData()
			{
				cout <<"enter A:";
				cin>>a;
			
			}
			
			number operator<(number A)
			{
			
			number tmp;
			
			if(a<A.a)
			{
			   cout<<"sceond is big";
			   
			}
			else if(a==A.a)
			{
				cout<<"both are  same ";
				
			}
			
			else {
				cout<<"first is big";
				
			}
			return tmp;
		}
		void getdata()
			{
			
			}
			
			
};

int main()
{
	number N1,N2,N3;
	
	N1.setData();
	N2.setData();
	
	N3=N1<N2;
	
	N1.getdata();
	N1.getdata();
	N3.getdata();
	
}

