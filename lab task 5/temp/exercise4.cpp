# include <iostream>
# include <limits>

int main(){
    int value;

    while (true){
        std::cout<<"please enter an integer value between 5 and 10:";
        std::cin>>value;

        if (std::cin.fail() || (value <5) || (value >10)){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout<<"Invalid input,please enter an integer value between 5 and 10." <<std::endl;

 } else{
            std::cout <<"your input value has been accepted."<<std::endl;
            break;
        }

        }
        return 0;
    }


