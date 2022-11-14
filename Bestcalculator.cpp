#include<iostream>
using namespace std;
class firsts
{
    public:
    int add();
    int sub();
    int mul();
    int div();
};
class sec
{
    int a, b ; 
    public:
    friend class firsts;
    int set();
};
int sec :: set()
{
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
}
int firsts :: add()
{
    sec m ; 
    m.set();
    int c=m.a+m.b;
    cout<<"The addition of a and b is :"<<c<<endl;
}
int firsts :: sub()
{
    sec m ; 
    m.set();
    int c=m.a-m.b;
    cout<<"The subtraction of a and b is :"<<c<<endl;
}
int firsts :: mul()
{
    sec m ; 
    m.set();
    int c=m.a*m.b;
    cout<<"The multiplication of a and b is :"<<c<<endl;
}
int firsts :: div()
{
    sec m ; 
    m.set();
    int c=m.a/m.b;
    cout<<"The dividation of a and b is :"<<c<<endl;
}

int main()
{
    char tell;
    cout<<"Hey everyone i am calculator "<<endl;
     back:
    cout<<"Do you want to use me"<<endl;
    cout<<"Type 'y' for yes or other key for no "<<endl;
    cin>>tell;
    if(tell=='y')
    {
        cout<<"Ohkkk :\nType 1 for add \n Type 2 for subtract  \n Type 3 for multiply \n Type 4 for divide "<<endl;
        {
            cin>>tell;
            if(tell=='1')
            {
                firsts r ; 
                r.add();
            }
            else if(tell=='2')
            {
                firsts r ;
                r.sub();
            }
            else if(tell=='3')
            {
                firsts r ; 
                r.mul();
            }
            else if(tell=='4')
            {
                firsts r;
                r.div();
            }
            else
            {
                cout<<"Please give correct character"<<endl;
            }
        }
        goto back;
    }
    else
    {
        cout<<"Ohkk,,Bye..."<<endl;
    }
    return 0;
}