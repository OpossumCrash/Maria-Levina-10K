/*18) Напишите логическую функцию, проверяющую, является строка палиндромом.
Можно считать, что строка состоит только из букв латиницы.*/
#include <iostream>

using namespace std;

int chet(int b){
if ((b % 2) == 0){
    return 1;
}
return 0;}

bool pal(char* &a, int n){

  int i = 0;
  while (*(a + i) == (*(a + n - 1 - i))){
        i++;}
  if ((chet(n)== 1) && (i == n - (n / 2) - 1)){return 1;};
  if ((chet(n)== 0) && (i == (n / 2))){return 1;}
  return i;
  }

int main() {
int N; cin >> N;

char*A = new char[N];
for (int i = 0; i < N; i++){
    cin >> *(A + i);
  };

if (pal(A, N)== 1){cout << "Yes";};
if (pal(A, N)== 0){cout << "No";};
}


