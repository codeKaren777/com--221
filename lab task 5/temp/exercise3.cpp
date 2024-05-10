# include <iostream>
# include <string>

int main() {
    std::string element[8] ={"B123","C234","A345","C15","B177","G3003","C235","B179"};
    for(int i =0; i<8 ; i++){
        if(element[i][0]=='B'){
            std::cout<<element[i] <<std::endl;
        }
    }
    return 0;
        }
