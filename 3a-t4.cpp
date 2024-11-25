#include<iostream> 
using namespace std; 

int main()
{
int k, i = 1, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k;
for (int n = 0; n <= 1;)
{
  cout << "Error!!! The amount of integers to sum must be more than 0, enter the amount of integers to sum = "; cin >> k;
if (k > 0)
 {
break;
 }
};
do {
cout << "Enter integer nr. " << i << ": "; 
cin >> number;
sum_k += number; i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: "  << sum_k;
return 0;
}
