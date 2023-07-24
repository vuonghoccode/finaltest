#include<iostream>
#include<math.h>
using namespace std;
#define max 100

int n; 
int a[max];

void nhapn(int &n){
	do{
	cout<<"Enter n: "; 
	cin >> n;
}
	while(n < 0);
}
void nhapmang( int a[] , int n){
	cout<<"Enter array : "<<endl;
	for ( int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
}

void hienthimang( int a[], int n){
	cout<<"Mang vua nhap la: "<< endl;
	for(int i = 0 ; i < n ; i++){
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
void cau3(int a[], int &n, int &x){
	int t = 0;
	int d = 0;
	cout<<endl<<"Nhap vao so thuc x: ";
	cin >> x;
	for(int i = 0 ; i < n ; i++){
		if(a[i] % 2 == 0 && (a[i] < x || a[i] == x)){
			t = t + a[i];
			d++;
			cout<<"Cac phan tu chan nho hon hoac bang x la: "<<a[i]<<endl;
		}}
		if(d > 0){
			cout<< "Tong la: " << t << "\nTBC la: "<< (float) t/d;
		}
		else{
			cout<<"Khong co phan tu nao"<<endl;
		}
	}	
	
void cau4(int a[], int &n){
	cout<<"\nCac phan tu duong trong mang la: "<<endl;
	for(int i = 0 ; i < n ; i++){
		if( a[i] > 0 ){
			cout<< "a["<<i<<"] = "<<a[i]<<endl;
		}
	}
}
//xoa phan tu trong mang
void xoa(int a[], int &n , int vitri){
	for(int i = vitri ; i < n ; i++){
		a[i] = a[i + 1];
	}
	n--;
}
void cau5(int a[], int n){
	int maxx = a[0];
	for(int i = n - 1; i > 0 ; i--){
		if(a[i] > maxx)
		maxx = a[i];
}
	cout<<"Phan tu duong lon nhat la: "<<maxx;
	for(int i = 0 ; i < n ; i++){
		if(a[i] == maxx && maxx > 0 ){
			xoa(a,n,i);
			i--;
	}	
	}
	cout<<endl<<"Mang sau khi xoa phan tu duong lon nhat la: "<<endl;
	for(int i = 0; i < n ; i++){
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}

int main(){
	int x;
	int maxx;
	nhapn(n);
	nhapmang(a,n);
	hienthimang(a,n);
	cau3(a,n,x);
	cau4(a,n);
	cau5(a,n);

	return 0;
}
