#include<iostream>
using namespace std;
main() {
string name_of_movie;
int price_of_an_adult_ticket;
int price_of_child_ticket;
int no_of_adult_tickets_sold;
int no_of_children_tickets_sold;
int total_money;
float percentage_of_money_to_charity;
int remaining_amount;

cout<<"Enter the name of the movie: ";
cin>>name_of_movie;

cout<<"Enter the price of an adult ticket: $";
cin>>price_of_an_adult_ticket;

cout<<"Enter the number of adult tickets sold: ";
cin>>no_of_adult_tickets_sold;

cout<<"Enter the price of children ticket: $";
cin>>price_of_child_ticket;

cout<<"Enter the number of children tickets sold: ";
cin>>no_of_children_tickets_sold;

total_money=(price_of_an_adult_ticket*no_of_adult_tickets_sold)+(price_of_child_ticket*no_of_children_tickets_sold);

percentage_of_money_to_charity=(total_money*10)/100;

remaining_amount=total_money-percentage_of_money_to_charity;

cout<<"The total amount generated from ticket sales: $"<<total_money<<endl<<"Donation to charity(10%): $"<<percentage_of_money_to_charity<<endl<<"Remaining amount after donation: $"<<remaining_amount<<endl;

}




