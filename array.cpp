#include<stdio.h>
#include<conio.h>
#define MAX 100
/* 

T�c gi?: Nguy?n Vi?t Nam Son
Trung t�m d�o t?o tin h?c - Thi?t k? ph?n m?m - Son �?p Trai: www.SonDepTrai.com

Ngu?n source code n�y T�i vi?t v�o nam 2012 l�c m?i b?t d?u h?c l?p tr�nh C/C++ n�n m?t s? c�ch s? kh�ng du?c t?i uu - B?n ch? n�n d�ng tr�n tinh th?n tham kh?o th�i nh�.
Mong gi�p d? du?c B?n tr�n con du?ng H?c L?p Tr�nh.
T?T C? V� S? TH�NH C�NG C?A B?N

*/void nhapmang(float a[MAX],int &n)
{
	do{
	printf("Nhap vao so phan tu cua mang:n=");
	scanf("%d",&n);
	if(n<1||n>MAX)
	printf("So ban nhap vao khong hop le!Xin ban vui long nhap lai!\n");
	else
	break;
	}while(n<1||n>MAX);
	for(int i=0;i<n;i++)
	{
		printf("Nhap vao a[%d]=",i);
		scanf("%f",&a[i]);
	}
}

void xuatmang(float a[MAX],int n)
{
	printf("\n>>>>>>>>>>>>>>MANG VUA NHAP LA:<<<<<<<<<<<<<<\n");
	for(int i=0;i<n;i++)
	{
		printf("%16f",a[i]);
	}
	printf("\n");
}

int main()
{
	float a[MAX];
	int n,NAMSON;
	quaylai:nhapmang(a,n);
	xuatmang(a,n);
	printf("\nBan co muon tiep tuc chay chuong trinh khong ? Neu co bam phim C,nguoc lai bam bat ky phim nao khac de ket thuc\n");
	NAMSON=getch();
	if(NAMSON=='c'||NAMSON=='C')
		goto quaylai;
		printf("done");
return 0;
}


