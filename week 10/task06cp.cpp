#include<iostream>
#include<string>
using namespace std;

string checkAlphabetCase(char letter) 
{
    if (letter == 'A')
    {
        return "You entered an uppercase A";
    }
    else 
    {
                return "You entered a lowercase a";
    }

}
    int main(){
        char userinput;
        cout<<"Enter 'A' or 'a': ";
        cin>>userinput;

        string outputMessage = checkAlphabetCase(userinput);
        cout<<outputMessage;
        return 0;
    }