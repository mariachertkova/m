#include <iostream>
#include <locale.h>
#include <ctime>

using namespace std;

int main(void){
	const int N=4;
	double B[N][N];
	int i, j;
	int min=1, max=10;
	for(int i=0; i<N; i++){
	    for(int j=0; j<N; j++){
		B[i][j]=min+rand()%(max-min+1);
	    cout<<B[i][j]<<" ";
	    }
	    cout<<endl;
	}
	cout<<endl;
	
	for(j=0; j<N; j++){
	    int temp=B[j][j];
	    for(i=0; i<N; i++){
	        B[i][j]/=temp;
			cout.precision(2);
	        cout<<B[i][j]<<" ";
	    }
		cout<<endl;
	}
    system("pause");
    return 0;
}