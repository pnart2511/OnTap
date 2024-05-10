//Thay ð?i trang ch? c?a b?n? … Hi?n t?i, trang này ðang ðý?c ð?t thành Trang ch?. B?n có th? thay ð?i trang này b?t c? lúc nào trong ph?n Cài ð?t.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>	// chua ham random
#include <iostream>
#include <math.h>

#define MAX 50

using namespace std;

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);
void SelectionSort(int a[], int n);
//viet them cac ham sap xep con lai
void InsertionSort(int a[] , int n);
void BubbleSort(int a[], int n);
void interChangeSort(int a[] , int n);
// Chuong trinh chinh------
int main ()
{
	int a[100], n;
	int input = 0 ;
	printf("n NHap Mang A: \n");
	NhapMang(a,n);
	printf("\n Mang A vua nhap : \n");
	XuatMang(a,n);
	printf("Nhap so de lua chon sap xep : [1] : Noi Bot / [2] : Chon / [3] : Chen / [4] : Doi Cho Truc Tiep /  ");
	scanf("%d",&input);
	if(input == 1)
	{
	printf("\nThuc hien sap xep noi bot - BubbleSort \n");
		BubbleSort(a,n);
	}
	else if(input == 2)
	{
		printf("\nThuc hien sap xep chon - SelectionSort \n");
		SelectionSort(a,n);
	}
	else if(input == 3)
	{
		printf("\nThuc hien sap xep Chen - InsertionSort \n");
		InsertionSort(a,n);
	}
	else if(input == 4)
	{
		printf("\nThuc hien sap xep doi cho truc tiep - interChangeSort \n");
		interChangeSort(a,n);
	}

	
	//SelectionSort(a,n);
//	InsertionSort(a,n);
	BubbleSort(a,n);
	//Goi them cac ham sap xep con lai
	
	printf("\nMang A sau khi sap xep\n");
	XuatMang(a,n);
	
	
		
	getch();
	return 1;
}


// Dinh nghia cac ham-----------
// Ham hoan doi 2 so nguyen
void HoanDoi(int &x, int &y)
{
	int tam = x; 
	x = y; 
	y = tam;
}
void BubbleSort(int a[], int n)
{
	
 for (int i = 0 ; i < n - 1  ; ++i )
 {
 
		for(int j = 0 ; j < n - i  - 1 ; ++j)
		{
			if(a[j] > a[j + 1])
			{
			int temp = a[j];
			a[j] = a[j + 1 ];
			a[j+1] = temp ;
			
			
			}
		
		
		}
 
 }
}
void InsertionSort(int a[] , int n)
{
	int pos ,i ;
	 int x ;
	 for(int i = 1 ; i < n ; i ++)
	 {
	 	x = a[i] ; 
	 	pos  =  i - 1;
	 	while ((pos>= 0) && (a[pos]>x))
				{
				a[pos+1] = a[pos];
				pos--;
				
				}		 
				
				a[pos+1] = x ; 
		 }
	
	
	}
// Sap xep chon
void SelectionSort (int a[], int n)
{ 	
	int k; //Chi so phan tu nho nhat trong mang
	for(int i=0; i<n-1; i++)
	{	
		k =i;
		for(int j=i+1; j<n; j++)
		    if (a[j] < a[k] ) 
				k = j;// ghi nhan vi tri phan tu hien nho nhat
		HoanDoi(a[k], a[i]);
	}
}
void interChangeSort(int a[] , int n)
{
	

int  i , j; 
for(i = 0 ; i < n -1 ; i ++)
{


 for (i = i + 1 ; j < n ; j ++)
 {
 
 if(a[j] < a[i]);
  HoanDoi(a[j], a [i]);
 
 }
}



}

/*void quickSort(int a[] , int l , int r)
{

int x, i , j;
x = a[(l+r)/2];
i = l ; j = r ;
do{
	while (a[i]< x) i ++;
	while(a[j] > x) j --; 
	if(i <= j)
	{
	Hoandoi(a[i], a[j]);
	i ++ ; j --;
	}
	
}
while(i<=j)
{

if(l < j)
quickSort(a,l, j);
if(i<r)
quickSort(a,i,r);


}

}
*/

void NhapMang(int a[], int &n) 
{
	printf("NHAP DANH SACH SO NGUYEN\n");
	printf("->Nhap so luong phan tu: ");
	scanf("%d", &n);

	while(n<=0) {
		printf("-> Nhap lai so duong: ");
		scanf("%d", &n);
	}

	// 0 -> (n-1)
	for(int i=0; i<=(n-1); i++) {
		printf("-Nhap phan tu thu %d:", i+1);
		scanf("%d", &a[i]);
	}
}
void XuatMang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}


