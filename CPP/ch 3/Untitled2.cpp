#include<iostream>
using namespace std;

class CAFE
{
	private:
		int id ;
		string name ;
		string type;
		int ratting;
		string  cityname;
		int  establishyear;
		int staffquntity;
		
		public:
			CAFE(int id,string name,string type,int ratting,string  cityname,int  establishyear,int staffquntity)
			{
			
			cout<<"id :\t\t" <<id<<"\n" <<"name:\t\t "<<name<<"\n"  <<"type:\t"<<type<<"\n"<<"ratting:"<<ratting<<"\n"<<"cityname:"<<cityname <<"\n"<<"establishyear:"<<establishyear<<"\n"<<"staffquntity:"<<staffquntity<<"\n";
		}
};
int main()

{
       CAFE h(101,"enco cofee","blackcofee",9,"surat",5,100);
       
};

