#include<iostream>
using namespace std;

 class bankaccount{

    private:

    int account_number;
    string account_holder;
    int balance;

    public:

    bankaccount(int accnumber, string accholder, int bala){

        account_number = accnumber;
        account_holder = accholder;
        balance = bala;
    }
z
    void display() const{

        cout<<"Account number"<< account_number<<endl;
        cout<<"Account Holder"<< account_holder<<endl;
        cout<<"Account balance"<<balance<<endl;

    }
        void deposit(double amount) {

            if(amount > 0){
                balance += amount;

                cout<<"Deposit successfully: "<< balance<<endl;
            }

            else{
                cout<<"Invalid amount"<<endl;
            }
        }
    

    void withdraw(double amount){

        if(amount>0 && amount<=balance){

            balance -= amount;
            cout<<"withdrawl balance successfully New balance: "<< balance<<endl;

        }
        else if(amount >  balance){
            cout<<"Insufficient balance "<<endl;
        }
        else{
            cout<<"invalid withdrawl amount "<<endl;
        }
    }

    double getbalance() const{
        return balance;
    }

 };


 int main(){

    int accountnumber;
    string accountholder;
    int initbalance;


    cout<<"Enter account number ";
    cin>>accountnumber;
    cin.ignore();

    cout<<"Enter account holder name: ";
    getline(cin, accountholder);

    cout<<"Initial balance: ";
    cin>>initbalance;


    bankaccount account(accountnumber, accountholder, initbalance);

    int choice;

    do{

        cout<<"Banking System Menu "<<endl;
        cout<<"1. Display account details: "<<endl;
        cout<<"2. Deposit Money \n";
        cout<<"3. Withdraw Money \n";
        cout<<"4. Check Balance \n";
        cout<<"5. Exit \n";

        cout<<"Enter your choice: "<<endl;
        cin>>choice;


        switch (choice){

            case 1:
            account.display();
            break;

            case 2: {
                double depositamount;
                cout<<"Enter amount to deposit: ";
                cin>>depositamount;

                account.deposit(depositamount);
                break;
            }


            case 3: {
                double withdrawamount;
                cout<<"Enter withdraw amount: ";
                cin>>withdrawamount;

                account.withdraw(withdrawamount);
                break;
            }

            case 4: {
                cout<<"Check balance: "<<account.getbalance()<<endl;
                break;
            }

            case 5:
            cout<<"Exiting..."<<endl;
            break;

            default: 
            cout<<"Invalid choice. Please try again. "<<endl;
        }
    } while(choice!=5);

    return 0;


 }