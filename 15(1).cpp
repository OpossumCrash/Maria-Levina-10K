/*Дано множество точек на плоскости. Напишите программу, находящую среди этих две,
 расстояние между которыми - наименьшее.*/

#include <iostream>
#include <cmath>
using namespace std;

double l(double x1,double y1,double x2,double y2)
{
	double dx=x1-x2;
	double dy=y1-y2;
	double k= sqrt(dx*dx + dy*dy );

	return k;
}
int main()
{
int n;
cin>>n;
double pointX[n];
double pointY[n];

for (int j=0;j<n;j++)
cin>>pointX[j]>>pointY[j];

double c=0;
double cmin=l(pointX[1],pointY[1],pointX[2],pointY[2]);

for (int j=0;j<n;j++)
{

for (int i=j+1;i<n;i++)
{
	c=l(pointX[j],pointY[j],pointX[i],pointY[i]);

	if (cmin>c)
  {
	cmin=c;
}

}
}
cout<<cmin;

return 0;
}
