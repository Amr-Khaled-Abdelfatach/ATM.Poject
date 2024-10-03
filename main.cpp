#include <iostream>
using namespace std;



void show (){  //( Show ) is the function to display the menu of ATM.

 cout <<"***** The Menu *****"<<endl;
 cout <<"1.See Your Money\n";  //.لمعرفة الرصيد الحالي
 cout <<"2.WithdDraw\n";     // .للسحب من الحساب
 cout <<"3.deposit\n";     //.للايداع في الحساب
 cout <<"4.Exit\n";      //.للخروج من البرنامج
 cout <<"**************\n"<<endl;
}


int main()
{
     double Money = 5000,WithdDraw,deposit;
    int choice;
    int password;
    string Name;

    cout <<"--------------------------------"<<endl;
    cout <<"   [ Welcome Too Ahly Bank ]"<<endl;
    cout <<"--------------------------------"<<endl;
       cout<<"Enter The Password : "<<endl;
        cin>>password;
    if(password ==12345){

        cout<<"Enter Your Name : "<<endl;
    cin >>Name;

        while(choice != 4)
    {
        show();

    cout <<"Enter Your Choice : \n";
    cin >>choice;

    switch(choice){
    case 1:
       cout <<"Your Money is :"<<Money<<endl<<endl;
       break;
    case 2:
        cout <<"Enter The Number Want to Add : \n";
        cin >>WithdDraw;
      Money=Money+WithdDraw;
      cout <<"Your Money After WithdDraw is : "<<Money<<endl<<endl;
      break;
    case 3:
        cout <<"Enter The Number Want to deposit : \n";
        cin >>deposit;
        if (deposit<=Money){
      Money=Money-deposit;
      cout <<"Your Money After deposit is : "<<Money<<endl<<endl;
        }
        else {cout <<"There Is No Enough Money\n";}
      break;
    case 4:
        cout <<"Thanks For You , "<<Name<<endl;
        break;
       }
      }
    }
    else {cout<<"The Password is wrong. "<<endl;}
     return 0;

}
