//write include statements
#include "variables.cpp"
#include <iostream>
//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount,total;
	cin>>meal_amount;
	tax_amount = get_sales_tax(meal_amount);
	cin>>tip_rate;
	total = tip_amount + tax_amount + meal_amount;
	printf("%20s%lf\n","Meal Amount:",meal_amount,"\n""Sales Tax:",get_sales_tax,"\n" "Tip Amount:",get_tip_amount "\n" "Total:",total);
	return 0;
}