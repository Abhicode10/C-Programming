#include<stdio.h>
int main()
{
    float bs,da,hra,gs,pf,ns;

    printf("Enter basic salary of an employee:");
    scanf("%f", &bs);
    da=(bs*25)/100;
    hra=(bs*15)/100;
    gs= bs+da+hra;
    pf=(gs*10)/100;
    ns=gs-pf;

    printf("Net salary:RS.%f\n", ns);
    return 0;


}