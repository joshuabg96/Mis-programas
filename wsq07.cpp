#include <iostream>
using namespace std;
int main ()
{
int menor,mayor,contador;
int suma=0;
bool condicion=true;
cout << "we will calculate the sum of integers in the range you provide"<< endl;
cout <<""<< endl;
cout << "Please give me the lower bound: " << endl;
cin >>menor;
cout <<"please give me the upper bound: "<< endl;
cin >>mayor;
contador=menor;
int mayor2=mayor+1;
while(condicion)
{
if (contador==mayor2)
{
condicion=false;
}
else
{
suma=suma+contador;
contador++;
}
}
cout<<"the sum from "<< menor<< " to "<< mayor << " is " << suma << endl;
return 0;
}
