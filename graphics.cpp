#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <string.h>
#include <graphics.h>
int main(){
 int gdriver = DETECT, gmode, errorcode;
 char arr[50]="MD SUMON ALI ";
 int i;
 initgraph(&gdriver,&gmode,"c:\\tc\\");
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
 for(i=0;arr[i]!='\0';i++){
 delay(100);
 setcolor(i+5);
 outtextxy(i+1,i-1,arr);
 }
 while(i>0){
 i--;
 delay(100);
 setcolor(i-5);
 outtextxy(i-5,i+1,arr);
 }
getch();
 closegraph();
}

