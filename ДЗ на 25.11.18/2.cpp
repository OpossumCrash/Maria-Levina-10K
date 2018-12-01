/*Write an effective programm, which finds all counts that consist of n signs and are palindromes.
In the comments write, why the brute force ic effective.*/
#include <iostream>

using namespace std;
/*
int step(int a,int b){
    int temp = a;
    for (int i = 0; i < b; i++){
    a = a * temp;
}
return a;
}

int main (){
 int n; cin >> n;
 int m = step(10, n - 2);
 int b = step(10, n - 1);
 cout << m << " " << b << endl;
 int schet = 0;
for(int i = m; i < b; i++){
    int* c = new int [n];
  for(int a = 0; a < n; a++){
    c[a] = (i % b) / (b / 10);
    b = b / 10;
    cout << c[a] << " ";
  };
  for(int a = 0; a < (n - (n / 2)); a++){
  while(c[a] == c[n - a]){
    schet += 1;
    };
  };
  cout << schet;
  if (schet == (n - (n / 2))){
   cout << i << endl;
  };
 };
 delete [] c;
 return 0;
}*/



