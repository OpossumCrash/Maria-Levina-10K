/*2) Напишите программу, вычисляющую произведение цифр целого числа, чётность
которых совпадает с чётностью последней цифры.*/
#include <iostream>

using namespace std;
/*int main () {

 int p;
 int product = 1;
 int i = 10;
 int schet = 1;

  cin >> p;
   while ((p / i) != 0){
        i = i * 10;
        schet += 1;
    }
int A[schet];

   for(int n = 0; n < schet; n++){
    A[n] = (p % i) / (i / 10);
    i = i / 10;
    }

   for(int n = 0; n < schet; n++){
     if ((A[n] % A[schet - 1]) == 0){
       product = product * A[n];}
   }
    cout << product;
return 0;


}*/
