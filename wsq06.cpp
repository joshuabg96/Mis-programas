#include <iostream>
using namespace std;
int main()
{
int numero, contador=0;
bool repetidor=true;
cout << "I have a number chosen between 1 and 100" << endl;
cout << "please guess a number between 1 and 100" << endl;
cin >> numero;
while(repetidor)
{
if (numero == 42)
{
cout <<"You got it! The right answer is indeed 42"<< endl;
repetidor=false;
}
else if(numero > 42)
{
cout << "I am sorry but " <<numero<< " is too hight, try again: " <<endl;
cin >> numero;
}
else if(numero < 42)
{
cout << "I am sorry but "<< numero << " is too low, try again: " <<endl;
cin >> numero;
}
contador++;
}
cout<<"you made "<<contador<<" guesses to get the right number"<< endl;
return 0;
}
