/*Напишите функции min, max, avg, med, процедуру swap принимающие в себя
три вещественных аргумента и программу с примером из использования. min -
находит минимальное из трех значений, max - максимальное, avg - среднее
арифметическое, med - медианное (гуглим, что это такое). swap - переставляет
значения по кругу ( первое во второе, второе в третье, третье в первое).*/
// В программе имена функций другие, так как min, max, и swap уже заняты.
int max_(int x,int y,int z);
int min_(int x,int y,int z);
void swap_(int x,int y,int z);
int avg(int x,int y,int z);
int med(int x,int y,int z);
#include <iostream>

using namespace std;

int main()
{ int a, b, c;

   cin >> a >> b >> c;

   return max_(a, b ,c );
   return min_(a, b ,c );
   return avg(a, b ,c );
   return med(a, b ,c );
   swap_(a, b ,c );
   cout << a << "," << b << "," << c;
}
