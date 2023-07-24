#include<iostream>
using namespace std;


int main() 
{


      int a;
 
		         
         cout <<"enter your age :";
         cin >>a;
         
       try
       {
       	
       	
       		if (a<=18)
       		{
       	throw 0;
	   }  
	   else
	    {
	   
	   		cout <<"your are eligible to vote :"<<endl;
	   	}
	}


      catch (int n)
	
	{
	cout<<"you are not eligible to vote :"<<endl;
	
    }
}
