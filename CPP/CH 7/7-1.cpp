#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout <<"enter A :";
	cin >>a;
	cout <<"enter B :";
	cin >>b;
	

  
  try
  {
  	if(b==0)
  	{
  		throw b;
  		
	  }
	  
	  else 
	  {
	  	cout <<"division :"<<a/b<<endl;
	  	
	  }
  }
  
  catch(int n)
  {
  	cout <<"cant devide by "<<n<<endl;
  }
  
  cout <<"THE END ";
};

