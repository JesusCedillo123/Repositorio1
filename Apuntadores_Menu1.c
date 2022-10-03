#include<REG52.h>
void rota (int ciclos);
//declaracion de funciones
void delay(int x);
int rota_1[8]={0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80};
int rota_2[8]={0x01, 0x04, 0x10, 0x02, 0x40,  0x08,  0x20, 0x80};
int rota_3[4]={0x01, 0x04, 0x10, 0x40};
int rota_4[4]={0x40, 0x10, 0x04, 0x01};
int rota_5[4]={0x02, 0x08, 0x20, 0x80};
int rota_6[4]={0x80, 0x20, 0x08, 0x02};
int rota_7[8]={0x01,0x80, 0x02,0x40, 0x04,0x20, 0x08, 0x10};

int x;
int *ptr;

void main(){
	while(1){
		delay(1000);
		switch (P1){
		case 0: P3=0x00;break;
		case 1: ptr=&rota_1[0]; rota(8); break;
		case 2: ptr=&rota_2[0]; rota(8); break;
		case 3: ptr=&rota_3[0]; rota(4); break;
		case 4: ptr=&rota_4[0]; rota(4); break;
		case 5: ptr=&rota_5[0]; rota(4); break;
		case 6: ptr=&rota_6[0]; rota(4); break;
		case 7: ptr=&rota_7[0]; rota(8); break;
		default: P3=0x00;break;
		}	
	}
}
void rota(int ciclos )
{
	int j;
	for (j=0; j<ciclos; j++){
	P3=*ptr;
		ptr=ptr+1;
		delay(1000);
	}
}
	void delay(int x){
	int I;
	
	for(I=0;I<x;I++){
	}
}
