/*Реализуйте класс string_queue -  очередь строк.
Класс должен содержать конструктор, деструктор, методы push,pop.*/
/*
#include <iostream>

using namespace std;

struct Node{
 string data;
 Node* next = NULL;
 Node* prev;
 };

class string_queue{
  Node* head;

 public :
  string_queue(): head(NULL){}    //конструктор

  void push(string x){
                                   // метод push
   if (head == NULL){
    head = new Node;
    head -> data = x;
    return;
   }

   Node* temp = head;
   while((temp -> next) != NULL){
    temp = temp -> next;
   };
   temp -> next = new Node;
   temp -> next -> data = x;
   cout << x << endl;
  };

  string pop(){                      //метод pop

   if(head == NULL){
    cout << "String_queue is empty";
    return 0;
   };

   Node* temp = head;
   string X = temp -> data;
   head = head -> next;

   delete temp;
   return X;
   }

 ~string_queue(){
  while(head != NULL){
    Node* temp = head;
    head = head -> next;
    delete temp;
   }

  }

};

int main(){

 string_queue A;

 int H; cin >> H;
 for(int i = 0; i < H; i++){
    string x; cin >> x;
    A.push(x);
 };

 for(int i = 0; i < H; i++){
   cout << A.pop() << endl;

 };

 return 0;
}
*/


