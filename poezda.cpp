#include <iostream> 
using namespace std;
int main() { 
	setlocale(LC_ALL, "Russian");
	int h1, m1, h2, m2; 
	cout<<"������� ����� ����������� (hh mm): "; 
	cin>>h1>>m1; 
	cout<<"������� ����� � ���� (hh mm): "; 
	cin>>h2>>m2; 
	int d3, h3, m3; 
	m3=(m1+m2)%60; 
	int hext=(m1+m2)/60; 
	h3=(h1+h2+hext)%24; 
	d3=1+(h1+h2+hext)/24; 
	cout<<"���� � ����� �������� ������"<<d3<<", "<<h3<<":"<<m3<<endl;
	system ("pause");
	return 0; 
} 
