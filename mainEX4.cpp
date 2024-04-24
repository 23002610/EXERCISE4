#include <iostream>

using namespace std;

void displayMenu();
void performOperation(int option);

int main()
{
char continueOption;

do{
    displayMenu();
    int option;
    cout<<"Enter your option:"<<endl;
    cin>>option;

    performOperation(option);
    cout<<"Press Y to continue"<<endl;
    cin>>continueOption;
}
while(continueOption == 'Y'|| continueOption=='y');
return 0;
}
   void displayMenu(){
   cout<<"Menu:"<<endl;
   cout<<"1: Addition"<<endl;
   cout<<"2: Subtraction"<<endl;
   cout<<"3: Multiplication"<<endl;
   cout<<"4: Division"<<endl;


   }
   void performOperation(int option){
   double a,b;
   cout<<"Enter the first number"<<endl;
   cin>>a;
   cout<<"Enter the second number "<<endl;
   cin>>b;

   switch (option){

   case 1:
       cout<<"The sum is: "<<a+b<<endl;
       break;

   case 2:
    cout<<"The Difference is: "<<a-b<<endl;
    break;
   case 3:
    cout<<"The Product is "<<a*b<<endl;
    break;
   case 4:
    if(b==0){
        cout<<"Error. Can't divide by zero."<<endl;
    }else{
    cout<<"The quotient is:"<<a/b<<endl;}

   break;

   default:
    cout<<"Invalid option."<<endl;




















    }
   }

