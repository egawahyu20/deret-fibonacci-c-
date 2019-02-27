#include <iostream>

using namespace std;

int main()
{
	int n;
	int fib[25]; //jumlah max deret bisa diubah
	cout << "masukkan banyak bilangan(max 25): ";
	cin >> n;
	
	// pembuatan deret fibonacci
	fib[0]=0; fib[1]=1;
	for(int i=2;i<=n;i++){
		fib[i]= fib[i-1] + fib[i-2];
	}
	
	// cetak deret fibonacci
	cout <<"Deret fibonacci: "<<endl;
	for(int i=0; i<n; i++){
		cout << fib[i]<<" ";
	}
	return 0;
}