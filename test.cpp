#include <stdio.h>
#include <time.h>
#include <conio.h>
int n;

void  tinhtuoi(int n)
{time_t s, val = 1;
struct tm* current_time;
s = time(NULL);
current_time = localtime(&s);
printf("TUOI CUA MAY LA = %d\n",((current_time->tm_year + 1900)-n));
}

main(){
printf("Hay nhap vao tuoi cua ban ");
scanf("%d",&n);
tinhtuoi(n);
_getch();
}