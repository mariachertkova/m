#include <iostream>
#include <math.h>

using namespace std;

void qsort (int *arr, int b, int e);

int main(){
	const int N=20;
	int arr[N];
	int min=1, max=100;
	for(int i=0; i<N; i++){
		arr[i]=min+rand()%(max-min+1);
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	qsort(arr, 0, N-1);
	for(int i=0;i<20;i++)
        cout<<arr[i]<< " ";
	system("pause");
	return 0;
}

void qsort (int *arr,int b, int e){
  int l = b, r = e;
  int piv = arr[(l + r) / 2]; // Опорным элементом для примера возьмём средний
  while (l <= r){
    while (arr[l] < piv)
      l++;
    while (arr[r] > piv)
      r--;
    if (l <= r)
      swap (arr[l++], arr[r--]);
  }
  if (b < r)
    qsort (arr, b, r);
  if (e > l)
    qsort (arr, l, e);
} 

