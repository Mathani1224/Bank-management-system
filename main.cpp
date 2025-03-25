//Bank account management system
#include<iostream>
#include<cstring>
using namespace std;
class account
{
private:
    string name;
    int acc_no;
    string acctype;
public:
    void getaccount()
    {
        cout<<"Enter customer Name: "<<endl;
        cin>>name;
        cout<<"Enter Account number: "<<endl;
        cin>>acc_no;
        cout<<"Enter Account type(c/s): "<<endl;
        cin>>acctype;
    }
    void show()
    {
        cout<<"Customer name: "<<name<<endl;
        cout<<"Account number: "<<acc_no<<endl;
        cout<<"Account Type(c/s): "<<acctype<<endl;
    }
};
class Saving_account:public account
{
private:
    float balance;
public:
    void display()
    {
        cout<<"Balance: "<<balance<<endl;
    }
    void a_deposit()
    {
        float deposit,intrest;
        cout<<"Enter deposit amount: "<<endl;
        cin>>deposit;
        balance=balance+deposit;
        intrest=(balance*2)/100;
        balance=balance+intrest;
    }
    void a_withdraw()
    {
        float withdraw;
        cout<<"Balance: "<<balance<<endl;
        cout<<"Enter amount to withdraw: "<<endl;
        cin>>withdraw;
        if(balance>500)
        {
            balance=balance-withdraw;
            cout<<"After withdraw The balance amount is: "<<balance<<endl;
        }
        else
        {
            cout<<"Insufficient balance........"<<endl;
        }
    }
};
int main()
{
    Saving_account s;
    s.getaccount();
    int choice;
        while(1)
        {
            cout<<"============================"<<endl;
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"============================"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)   Exit"<<endl;
            cout<<"============================"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                s.a_deposit();
                break;
            case 2 :
                s.a_withdraw();
                break;
            case 3 :
                s.display();
                break;
            case 4 :
                s.show();
                s.display();
                break;
            case 5 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    end:
        cout<<"Thank you for Banking with us......"<<endl;
        return 0;
}

