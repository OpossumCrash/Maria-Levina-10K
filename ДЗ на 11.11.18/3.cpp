/*3) Напишите программу, вычисляющую биномиальный коэффициент из n по к. В
программе нельзя использовать числа, превышающие итоговое значение.*/
/*#include <iostream>

using namespace std;

unsigned long long fact(unsigned int a){
   if (a == 0) return 1;
   unsigned long long res = 1;
   for (unsigned int i = 2; i <= a; i++){
    res *= i;
   }
return res;}

int main (){
    float q;
    int k;
    int n;

    cout << "Enter n" << endl;
    cin >> n;
    cout << "Enter k" << endl;
    cin >> k;
    if (k > n) cout << "None";
    q = fact (n)/(fact(k)*fact(n-k));

    if (q > n) cout << "None";
    cout << "C = " << q ;
    return 0;
}*/
