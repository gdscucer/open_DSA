// Calculator using Switch

#include <iostream>

using namespace std;

int main()
{
    /*
    int a, b;

    cout <<"Enter the value of a" <<endl;
    cin>>a;

    cout<<"Enter the value of b" <<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation to perform"<<endl;
    cin>>op;

    switch(op) {

        case '+': cout<< (a+b) << endl;
                  break;

        case '-': cout<< (a-b) << endl;
                  break;

        case '*': cout<< (a*b) << endl;
                  break;

        case '/': cout<< (a/b) << endl;
                  break;

        case '%': cout<< (a%b) << endl;
                  break;

        default: cout << "Please enter a valid Operation" << endl;

    }
    */

    // given money...tell 100,50,20,1 rupees note in that money

    int money;
    cin>>money;

    switch(1) {
        case 1:
        cout<<"No of 100 notes = "<< money /100 << endl;
        money = money % 100;

        case 2:
        cout<<"no of 50 notes = " << money /50<< endl;
        money  = money % 50;

        case 3:
        cout<<"no of 20 notes = " << money /20<< endl;
        money  = money % 20;

        case 4:
        cout<<"no of 1 notes = " << money << endl;
        money  = money % 1;
    }
    return 0;

}




