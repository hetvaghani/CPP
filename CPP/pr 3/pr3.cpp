#include<iostream>
using namespace std;

class shape 
{
protected :
	
  int h;
  int  w;
        
		
        shape()
        	{
			
        		cout<< "ENTER W:\t";
        		cin >> w;
        		
        		cout<< "ENTER H:\t";
        		cin >> h;
		}
};

class  triangle : public shape
{
	void Triangle()
	{
	
	cout<<"area1:"<<1/2*(w*h)<<endl;
    }
};

class rectengle : public shape
{
	void Rectengle()
	{
	
	cout<<"area 2 :"<<w*h<<endl;
    }    
};

int main()
{


	 
	triangle t;
	t.triangle;
	
	rectengle r;
	r.rectengle();		
}




