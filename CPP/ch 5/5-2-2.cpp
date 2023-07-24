#include<iostream>
using namespace std;

class number 

{
	
	public:
		int a;
		
		public:
			
			void setData()
			{
				cout <<"enter a :";
				cin>>a;
			
			}
			void getdata()
			{
				cout<<"a="<<a<<endl;
	                					
			}
};
int main()
{
	number N1,N2;
	
	N1.setData();
	N2.setData();
	
	N1.getdata();
	N1.getdata();
	
}

