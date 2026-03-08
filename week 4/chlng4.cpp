#include<iostream>
using namespace std;
int main(){
    char character;
    cout<<"Enter a character: ";
    cin>>character; 
    if (character == 'a' || character=='e' || character=='i' || character=='o' || character=='u'){
        cout<<"The character is a vowel";
    }
    else if(character != 'a' && character != 'e' && character != 'i' && character != 'o' && character != 'u' && (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z')){
        cout<<"The character is a consonant";
    }
    else if(character >= '0' && character <= '9'){
        cout<<"It is a number"<<endl;
    }
return 0;
}