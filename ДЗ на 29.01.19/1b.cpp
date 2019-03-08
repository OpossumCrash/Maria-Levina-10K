/*b.	40 ������
i.����������� ��������� ������ �� double-������� � ��� �������
ii.	��������� ����������� ������� (resize)
iii.	���������� � ������ (push_front)
iv.	�������� �� ������(pop_front)
v.	���������� �� �������� ������� (insert)
vi.	�������� �� �������� ������� pos: void erase(pos)
vii.	�������� ��������� �� �������� ������ �������: erase(a,b)
viii.	������������(�������) �������� operator+
ix.	�������� ����� �� ������� ������� find
x.	�������� ���������� ���� is_sort, ������� ����������, � �������� �����(���������� � ������, ���� ������ ������������)
*/

#include <iostream>

using namespace std;

class double_vector {

private :

 int sz;
 int cap;
 double* Data;

public :

 double_vector(int N, const &A){            //1)����������� �� double-�������
  cap = N;                                                         //� ��� �������
  for(int i = 0; i < N; i++){
    Data[i] = A.Data[i] ;
    sz++;
  };
  cout << "The constructor is working" << endl;

 };

~double_vector(){                  //����������
   delete [] Data;
   cout << "Destructor is working" << endl;
 };

 double_vector(const double_vector& A){         //����������� �����

  sz = A.sz;
  cap = A.cap;
  double* temp = new double [cap];

  for(int i = 0; i < sz; i++){
   temp[i] = A.Data[i];
  };
  Data = temp;
  delete [] temp;

  cout << "Copying constructor is working." << endl;
 };

 const double_vector& operator=(const double_vector& A){   //�������� ������������ ,�� ������ ������
  sz = A.sz;
  double* temp = A.Data;

  for(int i = 0; i < sz; i++){
    temp[i] = A.Data[i];
  };

    return *this;
    cout << "Prisvoenie" << endl;
 };

 double operator[] (unsigned int n){          //��������� �� �������

  int r = Data[n];
  return r;
  cout << "Operator [ ]" << endl;
 };

 void push__front(double y){         //3)push_front
  if(sz >= cap){
    cap *= 2;
  };

  double* temp = new double [cap];

  for(int i = 0; i < sz; i++){
    temp[i + 1] = Data[i];
    };

  delete [] Data;
  Data = temp;

  Data[0] = y;
  sz++;
  delete [] temp;
  cout << "Method push_front is working." << endl;
};

 double pop__front(){                   //4)pop_front

  double* temp = new double [sz - 1];

  for(int i = 0; i < (sz - 1); i++){
    temp[i] = Data[i + 1];
  };

  double y = Data[0];

  Data = temp;
  sz--;

  delete [] temp;

  cout << "Method pop_back is working." << endl;
  return y;
 };


 void push__back(double x){
  if(sz >= cap){
    cap *= 2;
    double* temp = new double [cap];
    for (int i = 0; i < sz; i++){
        temp[i] = Data[i];
           }
    delete [] Data;
    Data = temp;
  };
  Data[sz] = x;
  sz++;
  cout << "Method push_back is working." << endl;
};

 double pop__back(){         //pop_back

  double* temp = new double [sz - 1];

  for(int i = 0; i < (sz - 1); i++){
      temp[i] = Data[i];
  };

  double x = Data[sz];

  Data = temp;
  sz--;

  delete [] temp;

  cout << "Method pop_back is working." << endl;
  return x;
};

 unsigned int size_(){       //size()
 cout << "Size" << endl;
 return sz;
 };

 unsigned int cap_(){         //capacity()
 cout << "Capacity" << endl;
 return cap;
 };

 void resize_(int y){                 //2)resize
   if(((cap - sz) + y) >= 0){

    double* temp = new double [cap + y];

    for(int i = 0; i < sz; i++){
        temp[i] = Data[i];
    };

    for(int i = sz; i < (sz + y); i++){
        temp[i] = 0;
        };

    delete [] Data;
    Data = temp;
    delete [] temp;
    };
  return;
  };

 void insert_(int a, double y){           //5)insert

  double* temp  = new double[cap + 1];
  sz++;

  for(int i = (a - 1); i < (cap + 1); i++){
    temp[i + 1] = Data[i];
    };
  temp[a] = y;

  delete [] Data;
  Data = temp;
  delete [] temp;
 };

 void erase_(int pos){                   //6)erase(pos)

  double* temp = new double [cap - 1];

  for(int i = 0; i < pos;i++){
    temp[i] = Data[i];
  };
  for(int i = (pos + 1); i < (cap - 1); i++){
    temp[i - 1] = Data[i];
  };

  delete [] Data;
  Data = temp;
  delete [] temp;
 };

 void erase_(int a, int b){
  if(a < b){
   int res = cap - ((b - a) + 1);
   double* temp = new double [res];

   for(int i = 0; i < a; i++) temp[i] = Data[i];
   for(int i = a; i < res; i++) temp[i] = Data[i + res];

   delete [] Data;
   Data = temp;
   delete [] temp;
  };

  if(b < a){
   int res = cap - ((a - b) + 1);
   double* temp = new double [res];

   for(int i = 0; i < b; i++) temp[i] = Data[i];
   for(int i = b; i < res; i++) temp[i] = Data[i + res];

   delete [] Data;
   Data = temp;
   delete [] temp;
  };
 };
};


int main(){

int N; cin >> N;

double* arr = new double [N];
for(int i = 0; i < N; i++){
    cin >> arr[i] ;
    };
double_vector W(N, &arr);

cout << "The last element of vector is " << W.pop__back() << endl;
cout << "The first element of vector is " << W.pop__front() << endl;

int b; cin >> b;
W.push__front(b); for(int i = 0; i < W.cap; i++) cout << W[i] << " ";
int a; cin >> a;
W.push__back(a); for(int i = 0; i < W.cap; i++) cout << W[i] << " ";
int c; cin >> c;
W.erase_(c) for(int i = 0; i < W.cap; i++) cout << W[i] << " ";
int d; double e; cin >> d >> e;
W.erase_(d, e) for(int i = 0; i < W.cap; i++) cout << W[i] << " ";
int g, c; cin >> g >> c;
W.insert_(f, g) for(int i = 0; i < W.cap; i++) cout << W[i] << " ";
return 0;
};

