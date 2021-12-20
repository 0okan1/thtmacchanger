#include<stdio.h>
#include<stdlib.h>
#include"tht.h"
#include<unistd.h>
#include<string.h>

int main()
{
	int a= 1;
	while(a==1){
		int islem1 = tht_int("1: Paketleri yükle.\n2: Mac Adresi degistir.\nSeciminizi giriniz:");
		if(islem1==1){
			printf("Bilgisayarınızdaki paket yöneticisini seçiniz.\n");
			int islemswitc = tht_int("1:APT\n2:Pacman\n3:Yum\nSeciminizi giriniz:");
			switch(islemswitc){
				case 1:
				system("sudo apt install net-tools");
				break;
				case 2:
				system("sudo pacman -S net-tools");
				break;
				case 3:
				system("sudo yum install net-tools");
				break;
				default:
					printf("Yanlış bir işlem girdiniz.\n");
			}
		}
		else if(islem1==2){
			system("clear");
			char* arayuz  = tht_string("Lütfen Network arayüzünüzü giriniz:");
				char down[200];
				if(snprintf(down, sizeof(down),"sudo ifconfig %s down",arayuz)){
					printf("Down hazır.\n");
				}
				else{
					printf("Yalnış bir şeyler oldu.\n" );
				}
				char up[200];
				if(snprintf(up, sizeof(up),"sudo ifconfig %s up",arayuz)){
					printf("Up hazır\n");
				}
				else{
					printf("Yanlış bir şeyler oldu");
				}
			while(a==1){
				int mac1 = 00,mac2,mac3,mac4,mac5,mac6;
				mac2 = rand() %98 + 1; mac3 = rand() %98 + 1; mac4 = rand() %98 + 1; mac5= rand() %98 + 1; mac6 = rand() %98 + 1;
				system(down);
				char mac[200];
				if(snprintf(mac,sizeof(mac),"sudo ifconfig %s hw ether %d:%d:%d:%d:%d:%d",arayuz,mac1,mac2,mac3,mac4,mac5,mac6)){
					printf("Yeni mac adresin: %d: %d : %d : %d: %d : %d\n",mac1,mac2,mac3,mac4,mac5,mac6);
				}
				else{
					printf("Yanlış bir işlen oldu.\n");
				}
				system(mac);
				system(up);
				sleep(120);
			}
		}
	}

	return 0;
}
