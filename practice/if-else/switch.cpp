#include <iostream>
using namespace std;

int main()
{
  unsigned int a=0;

  cout << "inserte el cero o el uno\n";

  cin >> a;

  switch(a)
    {
    case 0: cout << "El numero es cero\n"; break;
      
    case 1: cout << "El numero es uno\n"; break;
      
    default: cout << "No sea loco, solo uno o cero\n";
    }
  
  return 0;

}
