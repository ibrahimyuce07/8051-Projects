#include <reg51.h>
#define msec 100
unsigned int arr[10]={0x40,0xF9,0x24,0x30,0x19,0x12,0x02,0xF8,0x00,0x10};
sbit d2=P1^2;
sbit d1=P1^3;
sbit d0=P1^4;
sbit d= P1^5;
unsigned int v1,v2,v3,v4,v0;
void delay(unsigned int count)
{
unsigned int j,k;
for (j=0;j<=count;j++)
for (k=0;k<=5;k++);
}
void main()
{
 v1=v2=v3=v4=v0=0;
  while(1)
  {   
  {
   v0=v0+1;
   if(v0==2)
   {
   v0=0;
   v1=v1+1;
   }
   P2=0xFF;
   d = 1;
   d2 = d0 = d1= 0;
   P2 = arr[v1];
   delay(msec);
   
   if(v1==10)
   {
   v1=0;
   v2=v2+1;
   }
   P2=0xFF;
   d0 = 1;
   d1 =d=d2= 0;
   P2 = arr[v2];
   delay(msec);
   
   if(v2==10)
   {
   v2=0;
   v3=v3+1;
   }
   P2=0xFF;
   d1 = 1;
   d2 =d=d0= 0;
   P2 = arr[v3];
   delay(msec);
   
   if(v3==10)
   {
   v3=0;
   v4=v4+1;
   }
   P2=0xFF;
   d2 = 1;
   d1 =d=d0= 0;
   P2 = arr[v4];
   delay(msec);
   
   if(v4==10)
   {
   v1=0;
   v2=0;
   v3=0;
   v4=0;
   }
   delay(msec);
   P2=0xFF;
   }
   }
   }