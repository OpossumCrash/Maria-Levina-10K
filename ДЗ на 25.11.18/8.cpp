/*Write a program that iterates through all the permutations of the array of letters in lexicographical
 order.The program should work in at most O (n!*(n) steps. */

#include <iostream>

using namespace std;

void cng(char &a, char &b){
 int temp = a;
 a = b;
 b = temp;
}
/*
int main () {
 int n; cin >> n;

 char* A = new char [n];
 int i;
 for(i = 0; i < n; i++){
    cin >> *(A + i);       //заполнили массив
 }
 char m = *(A + 0);
 for (i = 1; i < n; i++){
   char temp1 = *(A + i);
   char temp2 = *(A + i + 1);

   if (temp > m){
    cng(m, temp);
   }
 };

 for(i = n - 1; i >= 0; i--){
  cout << *(A + i);
 };
return 0;
}*/

