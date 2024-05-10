# include <iostream>
# include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    int daysUntilExpiration;
    srand(time(0));
       daysUntilExpiration = rand() % 12;
       if (daysUntilExpiration <= 10 && daysUntilExpiration > 5)
           cout <<" Your subscription will expire soon. Renew now!!"<<endl;
        else if (daysUntilExpiration <= 5 && daysUntilExpiration > 1)
        {
            cout << " Your subscription expires in " << daysUntilExpiration <<" days Renew now and save 10%!!"<<endl;
           // cout << "days Renew now and save 10%!!"<<endl;

        }
        else if (daysUntilExpiration = 1){
            cout <<" Your subscription expires within a day! "<<endl;
            cout << "Renew now and save 20%!!"<<endl;
        }
        else if (daysUntilExpiration = 0)
        cout << " Your subscription has expired "<<endl;
        else 
        cout <<" You have an active subscription"<<endl;
     return 0;
        
}