
// ����� ��� ����������� �����, ������������ � ���� ���� ����������� ����� ����.

#include <iostream>

using namespace std;
 
int factorial(int n){
    if(n<=1)
      return 1;
   return n*factorial(n-1);
}

int main(){
	for(int i=100;i<=999;i++){
		int digit1=i%10;     // �������
        int digit2=i/10%10; // �������
        int digit3=i/100;  // �����
        int sum=factorial(digit1)+factorial(digit2)+factorial(digit3);
        if(sum==i)
			cout<<i<<endl;
	}
	system("pause");
    return 0;
}