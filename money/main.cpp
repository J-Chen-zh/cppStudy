#include <iostream>

using namespace std;

int main()
{
  double inimoney = 10000;
  int year = 1;
  do
    {
      double interest ;
      interest = inimoney * 0.05;
      inimoney = inimoney + interest;
      year++;
      cout << inimoney << "\n" << year << endl;
      
    }while(inimoney <= 20000);
  return 0;
}
