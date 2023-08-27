#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    int h1,h2,h3,m1,m2,m3,s1,s2,s3,sec,sec1,sec2,temp;
    scanf("%d%d%d",&h1,&m1,&s1);
    scanf("%d%d%d",&h2,&m2,&s2);
    sec1 = h1*3600+m1*60+s1;
    sec2 = h2*3600+m2*60+s2;

    if(sec2>sec1)
    {
        temp = sec1;
        sec1 = sec2;
        sec2 = temp;
    }
    sec = sec1 - sec2;
    h3 = sec / 3600;
    sec = sec % 3600;
    m3 = sec / 60;
    sec = sec % 60;
    s3 = sec;
    printf("Differ time %d %d %d",h3,m3,s3);

}