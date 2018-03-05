#include <iostream>
using namespace std;

double exp(double ex, unsigned int n)
{
  double result=ex;

  if(n==0)
    {
      result=1;
    }
  else
    {
  for(int i=1; i<n; i=++i)
    {
      result = result*ex;      
    }
  return result;
    }
}
int factorial(int fact)
{
  int result=fact;
  
  if(fact==1 || fact==0)
    {
      return 1;
    }
  else
    {
      for(int i=1; i<fact ; i=++i)
	{
	  result=result*(fact-i);
	}
      return result;
    }
}


int main()
{
  cout.precision(20);
  long double suma=0.0;
  for(int a=0; a<=15; a=++a)
    {
      suma=suma+(1.0/(factorial(a)));

    }
  cout << suma << endl;

  return 0;
}
