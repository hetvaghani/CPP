#include<iostream>
using namespace std;

class Dimond 
{
	private:
		int id ;
		string name ;
		int staffquantity;
		int revenue;
		int rawdimond;
		int expertdimond;
		string CEOname;
		
		public:
			Dimond(int id ,string name,int staffquantity,int revenue,int rawdimond,int expertdimond,string CEOname)
			{
			
			cout<<"id :\t\t" <<id<<"\n" <<"name:\t\t "<<name<<"\n"  <<"staffquantity:\t"<<staffquantity<<"\n"<<"revenue:"<<revenue<<"\n"<<"rawdimond:"<<rawdimond <<"\n"<<"expertdimond:"<<expertdimond <<"\n"<<"CEOname:"<<CEOname<<"\n";
		}
};
int main()

{
       Dimond h(101,"srk",100,1550,1000,500,"HETVAGHANI");
       
};

