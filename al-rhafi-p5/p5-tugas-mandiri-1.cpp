#include <stdio.h>

int main()
{
	int jamM, jamK, LB;
	printf("Menentukan Lama Bekerja Seorang Pegawai");
	printf("\n========================================");
	printf("\nMasukkan Jam Masuk Kerja = ");
	scanf("%i", &jamM);
	printf("\nMasukkan Jam Keluar Kerja = ");
	scanf("%i", &jamK);
	
	if (jamK >= jamM){
		LB = jamK - jamM;
	}else {
		LB = (12 - jamM) + jamK;
	}
	
	printf("Lama Bekerja Seorang Pegawai Adalah = %i", LB);
	
	return 0;
}
