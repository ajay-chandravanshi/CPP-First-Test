#include <iostream>
using namespace std;
int main() {

  int tenure;
  int salary;
  int bonus;
  cout<<"enter the tenure=";
  cin>>tenure;
  cout<<"enter the salary=";
  cin>>salary;
  if(tenure<10 && salary<100000)
  {
      bonus=salary*20/100;
      cout<<"Bonus is allowed 20%\n";
      cout<<"Total salary="<<bonus+salary;
  }
  else if(tenure>10 && salary>100000)
  {
       bonus=salary*10/100;
      cout<<"Bonus is allowed 10%\n";
      cout<<"Total salary="<<bonus+salary;
  }
}