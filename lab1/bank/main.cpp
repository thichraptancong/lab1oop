#include <iostream>
#include <cmath>

using namespace std;

class account
{
private:
    int n;
    long ID[1000];
    double balance1[1000];
public:
    account (int k)
    {
        n=k;
        for (int i=0;i<n; i= i+1)
        {

            cout<<"typing the ID of the account #"<<i+1<<" : ";
            cin>>ID[i];
            cout<<"typing the balance of the account #"<<i+1<<" : ";
            cin>>balance1[i];
        }
    }
    void view()
    {
        cout <<"The account list: "<<endl;
        cout <<"\t"<<"ID"<<"\t"<<"Balance"<<endl;
        for (int i=0; i<n; i= i+1)
        {
            cout<<i+1<<"\t"<<left<<setw(5)<<ID[i]<<"\t"<<balance1[i]<<endl;
        }
    }
    void sort1()
    {
        for (int i=0; i<n-1; i=i+1)
        {
            for (int j=i+1; j<n; j=j+1)
            {
                if (balance1[i]<balance1[j])
                {
                    double xx;
                    long yy;
                    xx= balance1[i];
                    balance1[i]=balance1[j];
                    balance1[j]=xx;
                    yy= ID[i];
                    ID[i]=ID[j];
                    ID[j]=yy;
                }
            }
        }
        view();
    }
    void update(long id3, double bl3)
    {
        for (int i=0; i<n; i=i+1)
        {
            if (id3==ID[i])
            {
                balance1[i]=bl3;
            }
        }
    }
    int work()
    {
        int j;
        cout<< "what do you want to do ?"<<endl;
        cout<< "1.View account list     2.Sort the account list     3.Access to your account"<<endl;
        cout<< "4.Adding account        5.Deleting account"<<endl;
        cin >>j;
        return j;
    }
    double searchbl(long id2)
    {
        for (int i=0; i<n; i=i+1)
        {
            if (id2==ID[i])
            {
                return balance1[i];
            }
        }
        return 1;
    }
    void adding(long id4, double bl4)
    {
        n=n+1;
        ID[n-1]=id4;
        balance1[n-1]=bl4;
        view();
    }
    void del(long id5)
    {
        int vt,x;
        int i= 0;
        x=1;
        while (x!=0)
        {
            if (id5==ID[i])
            {
                vt=i;
                x=0;
            }
            else
            {
                i=i+1;
            }
        }
        cout<<vt;
        for (int j=vt; j<n-1; j=j+1)
        {
            ID[j]=ID[j+1];
            balance1[j]=balance1[j+1];
        }
        n=n-1;
        view();
    }
};
//--------------------------------------------------------------------//
class bank
{
private:
    long id;
    double balance;
public:
    bank (long id1, double bl)
    {
        id= id1;
        balance= bl;
    }
    int check()
    {
        int inp;
        cout<<"you now have "<<balance<<" ^^"<<endl;
        cout<<"Do you want to deposit or withdraw"<<endl;
        cout<<"1.Deposit                 2.Withdraw"<<endl;
        cin>>inp;
        return inp;
    }
    double dep()
    {
        double money;
        cout<<"how much do you want to deposit: ";
        cin>> money;
        balance= balance+ money;
        return balance;
    }
    double withdraw()
    {
        double money2;
        cout<<"how much do you want to withdraw: ";
        cin>> money2;
        balance= balance-money2;
        return balance;
    }
    void display()
    {
        cout<<"ID Account: "<<id<<endl;
        cout<<"The balance of the account: "<<balance<<endl;
    }
};
//--------------------------------------------------------------------//
int main()
{
    double bl;
    int acc,x;
    x=0;
    cout<<"how many account: ";
    cin>>acc;
    account acc1(acc);
    while (x!=2)
    {
        switch (acc1.work())
        {
        case 1:
            {
                acc1.view();
                break;
            }
        case 2:
            {
                acc1.sort1();
                break;
            }
        case 3:
            {
                long id1;
                cout<<"type your account ID: ";
                cin>>id1;
                bl=acc1.searchbl(id1);
                if (bl!=1)
                {
                    bank bank1(id1,bl);
                    switch (bank1.check())
                    {
                        case 1:
                        {
                            bl=bank1.dep();
                            break;
                        }
                        case 2:
                        {
                            bl=bank1.withdraw();
                            break;
                        }
                        default:
                        {
                             cout<<"You type the invalid number";
                        }
                    }
                    bank1.display();
                    acc1.update(id1,bl);
                }
                else
                {
                    cout<<"you type the wrong ID"<<endl;
                }
                break;
            }
        case 4:
            {
                long newID;
                double newBL;
                cout <<"typing the ID of the new account: ";
                cin >> newID;
                cout <<"typing the balance of the new account: ";
                cin >> newBL;
                acc1.adding(newID,newBL);
                break;
            }
        case 5:
            {
                long delID;
                cout<<" typing the ID of the account you want to delete: ";
                cin>> delID;
                acc1.del(delID);
                break;
            }
        default:
        {
            cout<<"You type the invalid number";
        }
        }
    cout<<"Back to the main menu: "<<endl;
    cout<<"1.Yes             2.No, Exit"<<endl;
    cin>>x;
    cout<<endl;
    }
}
