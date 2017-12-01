#include "iostream"
#include "locale.h"
#include "math.h"
using namespace std;
int main (){
	int n,a,b,c,s,m,l;
	cout<<"Vvedite trehznachnoe chislo"<<endl;
	cin>>n;
		a=n/100 ;
		l=n%100;
		b=l/10;
		m=l%10;
		c=m/1;
		s=a+b+c;
	if (s%3==0)
		cout<<"Delitsya"<<endl;
	else
		cout<<"Ne delitsya"<<endl;
	system ("pause");
	return 0;
}