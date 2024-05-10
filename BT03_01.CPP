//Bai 03_01
//Su dung thuat toan quay lui de  giai bai toan
//liet ke cac CHINH HOP Khong lap chap n cua n phan tu

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>	
#include <iostream>
#include <math.h>

using namespace std;
#define FALSE 0
#define TRUE 1
#define MAX 100
int n,k, d = 0; // d de danh stt cua to hop
int a[100], c[100];

void KhoiTao();
void PrintResult();
void Try( int i);

int main()
{
	//printf("\n Nhap n = "); scanf("%d",&n);
	//printf("\n Nhap k = "); scanf("%d",&k);
	KhoiTao();
    Try(1); // Duyet cac kha nang cua a[1];
    
	getch();
	return 1;
}

//DN chi tiet


void KhoiTao()
{
	printf("\n Nhap n = "); scanf("%d",&n);
	printf("\n Nhap k = "); scanf("%d",&k);  
	
	for (int i = 1 ; i<= n; i++)
	{
		c[i] = TRUE;
	}
     
	//bo sung code ....
	//Khoi tao gia tri cho c[], 
	//gan tat ca cac gia tri la TRUE, chua chon
		
}


void PrintResult()
{
	 printf("\nChinh hop khong lap chap k thu %2d:",++d);
     for( int i=1; i<=k; i++)
     	printf(" %3d",a[i]);
}

void Try( int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (c[j])
		 {
		 	a[j] = j;
		 	c[j] = FALSE;
		 	if (i == k)
		 		PrintResult();
		 	else
		 		Try(i + 1);
		 	c[j] = 
			 TRUE;
		 }    
		 
		 	
	 }
}


