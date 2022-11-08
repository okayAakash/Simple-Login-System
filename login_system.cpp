#include<iostream>
using namespace std;
class login
{
    int info_pas;
    string info_email;
    int Password;
    string email;
    public:
    
    void info()
    {
        cout<<endl<<"Enter Information for login Backend"<<endl;
        cout<<endl<<"**********************************************"<<endl;
        cout<<"Enter the password : "<<endl;
        cin>>info_pas;
        cout<<"Enter the e-mail : "<<endl;
        cin>>info_email;
        cout<<"**********************************************"<<endl;
        cout<<endl<<"**************** |BACKEND DATA STORED SUCCESSFULLY |******************"<<endl;
        int choice;
        c:
        cout<<endl<<"Choose 1 to continue : "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"        Continuing to login Page        "<<endl;
                break;
            }
            default:
            {
                cout<<"  You Entered Invalid Number, Try again "<<endl;
                goto c;
                break;
            }

        }
    }
    friend void result(login);
};

void result(login obj1)
{
    cout<<endl<<"----------------------------------------------------------------------"<<endl;
    cout<<endl<<"***********************************************"<<endl;
    cout<<"***************| Login System |****************"<<endl;
    cout<<"***********************************************"<<endl;
    start:
    cout<<endl<<"Enter the password : "<<endl;
    cin>>obj1.Password;
    cout<<endl<<"Enter E-mail : "<<endl;
    cin>>obj1.email;
    if(obj1.Password==obj1.info_pas && obj1.email==obj1.info_email)
    {
        cout<<endl<<"YOU HAVE BEEN SUCCESSFULLY LOGED IN !!!"<<endl;
    }
    else
    {
        cout<<"Incorrect Password or email, Try again."<<endl;
        goto start;
    }
}
int main()
{
    login o1;
    o1.info();
    result(o1);
    return 0;
}