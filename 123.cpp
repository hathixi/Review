#include<iostream>
#include<math.h>
#define max 100
int a[max];
using namespace  std;
void nhapMang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"A["<<i<<"] = ";
		cin>>a[i];
	}
}
void inMang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<"\n";
}
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
	cout<<"Nhap n = ";
	cin>>n;
	nhapMang(a,n);
	inMang(a,n);
//	int dem = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		if(n % i == 0) dem++;
//	}
//	if(dem == 2) cout<<"So nguyen to";
//	else cout<<"Khong la so nguyen to";

//	if(ktSNT(n)) 
//	cout<<n<<" la so nguyen to\n";
//	else
//	cout<<n<<" khong phai la so nguyen to\n";
//	if(kiemtraSNT(n) == 1) cout<<n<<"so nguyen to";
//	else cout<<n<<"k la so nguyen to";
	for(int i = 0; i <= n; i++)
	{
		if(ktSNT(a[i])) cout<<a[i]<<"\t";
	}
	
	return 0;
}
