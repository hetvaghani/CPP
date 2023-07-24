#include<iostream>
using namespace std;

class student
{
    private:
    	int id ;
    	string name;
    	int age;
    	string course;
    	string city;
    	string email;
    	string college;
    	
    public :
	
	void setdata(int id ,string name,int age,string course,string city,string email,string college)
	{
		this->id =id;
		this->name=name;
		this->age=age;
		this->course=course;
		this->city=city;
		this->email=email;
		this->college=college;
		
			}
			void getdata()
			{
				cout<<"id\t" <<id<<endl
				    <<"name\t" <<name<<endl
				    <<"age\t" <<age<<endl
				    <<"course\t" <<course<<endl
				    <<"city\t" <<city<<endl
				    <<"email\t" <<email<<endl
				    <<"college\t" <<college<<endl;
			}
};


int main()
{
	student s1,s2,s3,s4,s5;
	
	s1.setdata(101,"het",15,"c++","surat","vaghanihet21@gmail.com","nirma\n");
	s2.setdata(102,"Aasu",15,"c++","surat","vaghanihet21@gmail.com","nirma\n");
	s3.setdata(103,"man",15,"c++","surat","vaghanihet21@gmail.com","nirma\n");
	s4.setdata(104,"tirth",15,"c++","surat","vaghanihet21@gmail.com","nirma\n");
	s5.setdata(105,"jenish",15,"c++","surat","vaghanihet21@gmail.com","nirma\n");
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();
}
    	

    	
    	
