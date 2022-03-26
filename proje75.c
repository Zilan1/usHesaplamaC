#include <stdio.h>
#include <stdlib.h>
    
    int sayiTopla(int a, int b)
	{
		int toplam=a+b;
		return toplam;
	}
	
	int main() {
	
	int s1,s2;
	
	scanf("%d %d",&s1,&s2);
	int cevap=sayiTopla(s1,s2);
	
	printf("%d",sayiTopla(s1,s2));
    printf("%d",cevap);
    
	return 0;
 }
	
	
	
	//**********************************************************
	
	//int usHesaplama(int a, int b)
	//{
		//int i;
		//int cevap=1;
    	//for(i=0;i<b;i++)
    	
		//cevap=cevap*a;
    	
		//printf("Girdiginiz Sayinin Ussu: %d",cevap);
	//}
      
//int main() {
	
	//int sayi,us;
	
	//printf("Lutfen Sayiyi Giriniz: ");
	//scanf("%d",&sayi);
	
	//printf("Lutfen Sayinin Ussunu Giriniz: ");
	//scanf("%d",&us);
	
	//usHesaplama(sayi,us);4
	
