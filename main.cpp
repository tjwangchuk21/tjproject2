/**
* Name:
* Program Name:
* Date:
* Extra:
*/

#include <iostream>
using namespace std;
int main()
{
     int num1;
     cout << "What is your integer number 1: " ;
     cin >> num1;
    int num2;
     cout << "What is your integer number 2: " ;
     cin >> num2;

     int sum = num1 + num2;
     int dif = num1 - num2;
     int mult = num1 * num2;
     int div = num1 / num2;
     int mod = num1 % num2;
     int inc1 = ++num1;
     int dec1 = --num1;
     int tot = sum + dif + mult + div + mod + inc1 + dec1;



     cout << "The sum of the two numbers is: " << sum << endl;
     cout << "The difference of the two numbers is: " << dif << endl;
     cout << "The product of the two numbers is: " << mult << endl;
     cout << "The quotient of the two numbers is: " << div << endl;
     cout << "The mod of the two numbers is: " << mod << endl;
     cout << "The increment of the first numbers is:" << inc1 << endl;
     cout << "The decrement of the second numbers is: " << dec1 << endl;
    cout << "The total of all the values is: " << tot << endl;
     







     

}


