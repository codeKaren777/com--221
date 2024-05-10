# include <cstdlib>
# include <ctime>
# include <iostream>
using namespace std;

int main() {
    srand (time(0));
    int DayUntilExpiration;
    DayUntilExpiration = (rand()% 11) + 1;
    cout << DayUntilExpiration <<endl;

    if (DayUntilExpiration == 0)
    cout << "Your subscription has expired" <<endl;
    else if (DayUntilExpiration ==1)
    cout << " Your subscription expires within a day.Renew now and save 20%:" <<endl;
    else if (DayUntilExpiration <=5)
    cout <<"Your subscription expires in five days.Renew now and save 10%:"<<endl;
    else if (DayUntilExpiration <=10)
    cout << "Your subscription expires soon.Renew now!" <<endl;
    else 
    cout << "You have an active subscription" <<endl;

    return 0;
}