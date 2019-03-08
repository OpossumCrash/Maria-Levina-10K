/*Реализуйте класс char_deque -  дек символов чисел переменного размера.
Класс должен содержать конструктор, деструктор, методы push_front, push_back,pop_front, pop_back*/

#include <iostream>

using namespace std;
/*
struct Node{
 char data;
 Node* next = NULL;
 Node* prev = NULL;
};
class char_deque{
 Node* head;
 Node* tail;

 public:
   char_deque(): head(NULL), tail(NULL){}            // конструктор

   void push__front(char x, int n){

     if(head == NULL){
        head = new Node;
        head -> data = x;
        tail = head;
        return;
     }

    head -> prev = new Node;
    head -> prev -> data = x;
    head -> prev -> next = head;
    head = head -> prev;

   }

   void push__back(char x, int n){

     if(tail == NULL){
        tail = new Node;
        tail -> data = x;
        head = tail;
        return;
     }

    tail -> next = new Node;
    tail -> next -> data = x;
    tail -> next -> prev = tail;
    tail = tail -> next;

   };

   char pop__front(){

    if(head == NULL){
        cout << "Deque is empty" << endl;
        return 0;
      }

    Node* temp = head;
    head = head -> next;
    int x = temp -> data;

    delete temp;
    return x;
   }

   char pop__back(){

     if(head == NULL){
        cout << "Deque is empty" << endl;
        return 0;
      }

    Node* temp = tail;
    tail = tail -> prev;
    int x = temp -> data;

    delete temp;
    return x;
   }

   ~char_deque(){
     while(head != NULL) {                           //деструктор
        Node* temp = head;
        head = head -> next;
        delete temp;
     }
   }
};

int main(){

 char_deque A;
 int N; cin >> N;
 int K; cin >> K;

 for(int i = 0; i < N; i++){

  char n; cin >> n;
  A.push__front(n, i);
 };

cout << "Pushing 1 is finished" << endl;

 for(int i = 0; i < K; i++){

  char k; cin >> k;
  A.push__back(k, i);
 };

cout << "Pushing 2 is finished" << endl;

 for(int y = 0; y < N; y++){
  cout << y << " " << A.pop__front() << endl;
 };

 for(int y = 0; y < K; y++){
  cout << y + N << " " << A.pop__back() << endl;
 };

return 0;
}
*/
