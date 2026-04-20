# include<iostream>
using namespace std;

int x = 10;
void myFunction() 
{
   int x =  20;
}

main()
{
    cout << "Value of x: " << x << endl; // This will print 10, not 20, because the local variable x in myFunction is not used here.
}

