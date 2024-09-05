#include<iostream>
using namespace std;

class date
{
    int d;
    int m;
    int y;

    public:
    date()
    {
        cout<<"Today's Date is: "<<endl;
        d = 5;
        m = 9;
        y = 24;
        cout<<d<<"/"<<m<<"/"<<y;
    }
};
int main()
{
    date today;
}

/*
Today's Date is: 
5/9/24
*/
