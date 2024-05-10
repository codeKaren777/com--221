# include <cstdlib>
# include <ctime>
# include <iostream>

using namespace std;
int main (){
    srand (time(0));
    int DayUntilExpiration;
    DayUntilExpiration = (rand()% 11)+ 1;
    cout << DayUntilExpiration <<endl;


switch (DayUntilExpiration ) 
{
    case a:
    if(DayUntilExpiration == 0);
    cout << "your subscription has expired:"<<endl;
    break ;

    case1:
    if(DayUntilExpiration == 1);
    cout <<"Your subscription expires within a day.Renew now and save 10%:"<<endl;
    break ;

    case2:
    if(DayUntilExpiration <= 5);
    cout <<"Your subscription expires in five days.Renew now and save 20%: "<<endl;
    break ;

    case3:
    if(DayUntilExpiration <= 10);
    cout <<"your subscription will expire soon.Renew now!"<<endl;
    break ;
    default:
    cout <<"you have an active subscription:"<<endl;

    return 0;
}

}