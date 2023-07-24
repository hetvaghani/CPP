#include<iostream>
using namespace std;

class calculate
{

private :
int a,b;

	public:
		
		
		void setdata()
		{
		
		
		cout<<"enter a";
		cin  >> a;
		cout<<"enter b";
		cin  >> b;
	}
	void getdata()
	{
		try {
			if(b==0)
			{
				throw b;
			}
			else
			{
				cout << "Division: " << a/b << endl;
			}
		}
		catch(int n)
		{
			cout << "Can't devide by " << n << endl;
		}
	}
};

int main()
{
	calculate a;
	
	a.setdata();
	a.getdata();

}
