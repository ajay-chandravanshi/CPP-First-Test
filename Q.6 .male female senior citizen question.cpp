#include <iostream>
using namespace std;
int main() {
   int age;
   string gender;
   cout<<"enter your age and gender=";
   cin>>age>>gender;
   if(age>60)
   {
        cout << gender << " citizen is a senior." << endl;
   }
   else{
       cout << gender << " citizen is not a senior." << endl;
   }
}