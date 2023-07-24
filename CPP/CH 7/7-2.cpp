#include<iostream>
using namespace std;

int main()
{
	int a;
	
	cout <<"enter your age :";
	cin >>a;
	
	

  
  try
  {
  	if(a<=18)
  	{
  		throw a;
  		
	  }
	  
	  else 
	  {
	  	cout <<"your age is  valid for vote  :"<<endl;
	  	
	  }
  }
  
  catch(int n)
  {
  	cout <<"your age is not valid for vote "<<endl;
  }
  
  cout <<"THE END ";
};

