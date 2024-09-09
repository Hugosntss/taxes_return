#include <iostream>
using namespace std;

/* This program has been tasked to inform the user how much taxes in total(including estate taxes and county taxes)
should be paid, and the program shows earnings before the tax deduction*/


int main(){

double store_income;

cout<<"How much income would you like to declare? \n";  //Data given by the user
cin>> store_income;

float estate_tax = 0.4; // 0.4 represents 4% of taxes
float county_tax = 0.2; // 0.2 represents 2% of taxes

double result_estate = (store_income * estate_tax / 10); // divided by 10 to avoid numbers with commas
double result_county = (store_income * county_tax / 10);

cout<<"Your total sales before estate taxes is: \n"<<"$"<<result_estate + store_income<<endl;
cout<<"Your total sales before county taxes is: \n"<<"$"<<result_county + store_income<<endl;


double after_taxes = result_estate + result_county;

cout<<"Total taxes you need to pay: "<<"$"<<after_taxes;



}