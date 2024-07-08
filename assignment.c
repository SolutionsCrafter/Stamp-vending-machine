#include<stdio.h>
void main(){
int stamp,amount,cha, stv,cov, sa10=20,sa15=20,sa25=20, ca5=20,ca10=20,ca25=20,ca50=20;
int con=0,i;

while(con==0){
printf("Enter the value of stamp:Rs"); scanf("%d",&stamp);
stv=stamp;
switch(stv)
{
case 10:
    if(sa10<1)
        printf("No stamp available\n");
        break;
case 15:
    if(sa15<1)
        printf("No stamp available\n");
        break;
case 25:
    if(sa25<1)
        printf("No stamp available\n");
        break;
default:
    printf("\aAvailable only Rs10, Rs15 or Rs25 stamps\n");stv=0;break;
}
if(stv>0){
    printf("Enter the coin:"); scanf("%d",&cov);
         }

if((stv==stamp) && (cov>0)){
    cha=cov-stv;
    if(stv==cov){
        if((cov=25) && (ca25>0)){
            sa25-=1;ca25+=1;
            printf("Transaction complete\nChange:Rs0\nAvailable stamps\\ Rs10:%d, Rs15:%d, Rs25:%d\nAvailable coins\\ Rs5:%d, Rs10:%d, Rs25:%d, Rs50:%d",sa10,sa15,sa25,ca5,ca10,ca25,ca50);}
        else if(cov=10 && ca10>0){
            printf("Transaction complete\nChange:Rs0");sa10-=1;ca10+=1;}
    else{
        printf("\aNo change available or invaled coin");}
               }
    else if(stv<cov){
            cha=cov-stv;
            if(cha==25 && ca25>0){
                sa25-=1;ca25-=1;ca50+=1;
                printf("Transaction complete\nChange:Rs%d\nAvailable stamps\\ Rs10:%d, Rs15:%d, Rs25:%d\nAvailable coins\\ Rs5:%d, Rs10:%d, Rs25:%d, Rs50:%d",cha,sa10,sa15,sa25,ca5,ca10,ca25,ca50);}
            else if(cha==35 && ca25>0 && ca10>0){
                    sa15-=1;ca25-=1;ca10-=1;ca50+=1;
                    printf("Transaction complete\nChange:Rs35\nAvailable stamps\\ Rs10:%d, Rs15:%d, Rs25:%d\nAvailable coins\\ Rs5:%d, Rs10:%d, Rs25:%d, Rs50:%d",sa10,sa15,sa25,ca5,ca10,ca25,ca50);}
                 else if(cha==10 && ca10>0){
                        sa15-=1;ca10-=1;ca25+=1;
                        printf("Transaction complete\nChange:Rs10\nAvailable stamps\\ Rs10:%d, Rs15:%d, Rs25:%d\nAvailable coins\\ Rs5:%d, Rs10:%d, Rs25:%d, Rs50:%d",sa10,sa15,sa25,ca5,ca10,ca25,ca50);}
                      else if(cha==40 && ca25>0 && ca10>0 && ca5>0){
                            sa10-=1;ca25-=1;ca10-=1;ca5-=1;ca50+-1;
                            printf("Transaction complete\nChange:Rs40,\nAvailable stamps\\ Rs10:%d, Rs15:%d, Rs25:%d\nAvailable coins\\ Rs5:%d, Rs10:%d, Rs25:%d, Rs50:%d",sa10,sa15,sa25,ca5,ca10,ca25,ca50);}
                           else if(cha==15 && ca10 && ca5 >0){
                                 sa10-=1;ca10-=1;ca5-=1;ca25+=1;
                                 printf("Transaction complete\nChange:15,\nAvailable stamps\\ Rs10:%d, Rs15:%d, Rs25:%d\nAvailable coins\\ Rs5:%d, Rs10:%d, Rs25:%d, Rs50:%d",sa10,sa15,sa25,ca5,ca10,ca25,ca50);}
                                else
                                  printf("No change available\n");
                     }
          else
            printf("\aInsufficient amount tendered");
                        }


printf("\n\aType 0 to continue or Type 1 to exit");
scanf("%d",&i);
con+=i;
 }
}
