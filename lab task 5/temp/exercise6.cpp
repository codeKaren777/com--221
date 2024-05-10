# include <iostream>
# include <fstream>
# include <string>
# include <algorithm>

using namespace std;

int CountVowels(const string& text){
    int Count = 0;
    string vowels = "aeiouAEIOU";
    for (char c : text){
        if (vowels.find(c) !=string :: npos){
            count++;

        }
    }
    return count;

    int countwords (const string& text);
        int count = 0;
        size_t pos = 0;
        while ((pos = text.find_first_not_of("",pos))!= string::npos){
            count++;
           int countwords(count string& text);
                pos =0;
                while (pos = text.find_first_not_of(" ",pos)!= string::npos){
                    count++;
                    pos =text.find_first_of (" ",pos);

                }
                return count;

            }
            string ReserveString(const string& text);
                string ReserveText = text;
                reserve (ReservedText.begin(),reservedText.end());
                return ReservedText;

            }
            string CapitalizeSecondLetter(const string& text);
                string result = text;
                bool capitalize =false;
                for(Size_t i = 0; i < text.length(); i++){
                    if(isalpha(text[i])){
                        if (capitalize){
                            result[i] = toupper(text[i]);

                        }
            string CapitalizeSecondLetter(const string& text);
                for(Size_t i = 0; i < text.length; i++){
                    if isalpha(text[i])
                    if (capitalize){
                        result[i] = toupper(text[i]);

                    }
                    capitalize = !capitalize;

                }
                return result;

            }   
            int  main(){
                string FileData;
                ifstream inFile("C++.txt");

                if(inFile.is_open()){
                    getline(inFile, FileData);
                    inFile.close();

                    int numvowels = countvowels(FileData);
                    cout<<"number of vowels"<<numvowel<<endl;
                int numwords = countvowels FileData;
                cout<<"number of words:"<<numwords<<endl;

            string ReversedStatement= ReverseString(FileData);
            cout<<"Reversed statement:"<<ReverseStatement <<endl;

            string CapitalizedStatement = CapitalizeSecondLetter(FileData);
            cout << "Capitalized Statement" << capitalizedStatement << endl;

                    
                }else{
                    cout<< "unable to open file."<< endl;
                }
                return 0;

            }         
        
                    }

