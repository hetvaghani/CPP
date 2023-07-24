#include<iostream>
using namespace std;

int main()
{
	int a;
	string password;
	cout <<"enter your password :";
	cin >>a;

	

  
  try
  {
  	if(a>=65 &&a<=90)
  	{
  		throw a;
  		
	  }
	  
	  else 
	  {
	  	cout <<"your password is not    valid  :"<<endl;
	  	
	  }
  }
  
  catch(int a)
  {
  	cout <<"your password is  valid "<<endl;
  }
  
  cout <<"THE END ";
};

