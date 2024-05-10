#include <iostream>
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

   void reverse(string data){
        for (int i = data.length()-1; i >= 0; i-- )
        {
           cout << data[i];
       
        }
          
   }


int main()
{
    int count = 0;
    int count1 = 0;
    ifstream input("inputFile1.txt");
    string fileData;

    if (input.is_open())
    {
        

        getline(input, fileData);
        cout << fileData << endl;

        for (int i = 0; i < fileData.length(); i++)
        {

            bool value = (fileData[i] == 'a' || fileData[i] == 'e' || fileData[i] == 'i' || fileData[i] == 'o' || fileData[i] == 'u' || fileData[i] == 'A' || fileData[i] == 'E' || fileData[i] == 'I' || fileData[i] == 'O' || fileData[i] == 'U');

            if (value)
                count++;
       
        }
        
        for (int i = 0; i < fileData.length(); i++)
        {

            bool value = (fileData[i] == ' ');

            if (value)
                count1++;
       
        }
        
       // Initialize flags to track whether to capitalize the next letter and if the current letter is the second one
        bool capitalizeNext = true; // Initially set to true to capitalize the first letter
        bool isSecond = false;
        
        for (char& character : fileData) {

            if (isalpha(character)) {
                if (capitalizeNext) {
                    if (!isSecond){
                        isSecond = true;
                        continue;

                    }
                    character = toupper(character);
                    capitalizeNext = false;
                    isSecond = false;
                }
            } else
            {
                capitalizeNext = true;
            }
            
        }

        cout << "Capitalized second letters: " << fileData << endl;
    
    }

   cout << "The number of vowels is " << count << endl << "The number of words " << count1 << endl;

   reverse(fileData);

    return 0;
}

