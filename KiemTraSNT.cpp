#include <iostream>
#include <math.h>
#define max 100
int Array[max];
using namespace  std;

//Ham nhap mang
void nhapMang(int Array[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"Array["<<i<<"] = ";
		cin>>Array[i];
	}
}

//Ham in mang
void inMang(int Array[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<Array[i]<<"\t";
	}
}

//Ham kiem tra so nguyen to
bool ktSNT(int n){
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)	{
		if (n % i == 0)
		return false;
	}
	return true;
} 
int main()
{
	int n;
	do {
	cout<<"Nhap n = ";
	cin>>n;
	} while(n <= 0);
	nhapMang(Array,n);
	cout<<"\nCac phan tu co trong mang: ";
	inMang(Array,n);
	cout<<"\nCac so nguyen to co trong mang: ";
	for(int i = 0; i <= n; i++)
	{
		if(ktSNT(Array[i])) cout<<Array[i]<<"\t";
	}	
	return 0;	
}
