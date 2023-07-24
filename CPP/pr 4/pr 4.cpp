#include <iostream>
using namespace std;

class Distance {
private:
    int km, meter;

public:
	
     void input()
    {
        cout << "Enter km: ";
        cin >> km;
        
        cout << "Enter meter : ";
        cin >> meter;
    }
     
   void output()

    {
        cout << "km:" << km << "\t"
             << "meter:" << meter << endl;
    }

    Distance operator+(Distance& dist1)
    {
        Distance temp; 
        temp.km = km + dist1.km +(temp.meter /1000);
        temp.meter = meter + dist1.meter;
        temp.meter = temp.meter/1000;
        return temp; 
    }
};

int main()
{
    Distance D1,D2,D3;

    cout << "Enter first  input:"<< endl;
    D1.input();
    cout << endl;

    cout << "Enter second input:"<< endl;
    D2.input();
    cout << endl;

    D3=D1+D2;

    cout <<"km:"<<endl;
    D3.output();

    cout<<endl;
}

