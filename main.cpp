// Программа, в которой создается массив и заполняется числами Фибоначчи
#include <iostream>
using namespace std;
int main ()
{
    int colichestvo;
     long long int a, b, c;
    a = 1;
    b = 1;
    cout << " Dopustimiy diapazon colichestva shisel ot 1 do 92" << endl;
    cout << " Vvedite colichectvo chisel ";
    cin >> colichestvo;
    while ( colichestvo < 1 || colichestvo > 92)
    {
      cout << " Vveli nedopustimoe chislo"<< endl;
      cout << " Vvedite colichestvo chisel ";
      cin >> colichestvo;
    }
    long long int massivFibonachi [ colichestvo];
      if( colichestvo == 1)
      {
         massivFibonachi [0] =1;
      }
      if ( colichestvo == 2)
      {
          massivFibonachi [0] =1;
          massivFibonachi [1] =1;
      }
    if ( colichestvo > 2)
    {
        massivFibonachi [0] =1;
        massivFibonachi [1] =1;
     for ( int n = 2; n < colichestvo; n ++)
     {
        c = a + b;
        massivFibonachi [n] = c;
        a = b;
        b = c;
     }
    }
     for ( int i =0; i < colichestvo; i++)
     {
       cout  << i << " element massiva = " << massivFibonachi [i] << endl;
     }
}
