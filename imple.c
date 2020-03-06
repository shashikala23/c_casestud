/*142894 shashikala j*/
#include "mobi.h"
void readAll(mobile_t* parr,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        readOne(&parr[i]);
    }
}
void readOne(mobile_t* parr)
{
    printf("\nEnter model\t:");
    scanf("%d",&parr->model);
    printf("\nEnter display size(in inch)\t:");
    scanf("%d",&parr->dis_size);
    printf("\nEnter battery Capacity(in mAh)\t:");
    scanf("%d",&parr->battery);
    printf("\nEnter Market Price\t:");
    scanf("%lf",&parr->price);
    printf("\nEnter Available memory RAM\t");
    scanf("%d",&parr->memory);
    printf("\nEnter internal storage\t");
    scanf("%d",&parr->int_store);
    printf("\nEnter camera resolution\t");
    scanf("%d",&parr->pixel);

    printf("\nEnter oem of mobile:(Available manufacture option:samsung,oppo,vivo,redmi,oneplus,iphone,nokia\t");
    char tempoem[10];
    scanf("%s",tempoem);
 //(parr->oe)=oem_tenum(tempoem);
}
void displayAll(const mobile_t* parr,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        displayOne(&parr[i]);
    }
}
void displayOne(const mobile_t* parr)
{
    printf("\nmodel\t: %d\nsize(in inch)\t: %d\nBattery capacity\t: %d \nMarket price\t: %lf\nMemory\t: %d\nInternal storage\t: %d\nCamera resolution\t: %d",
           parr->model,parr->dis_size,parr->battery,parr->price,parr->memory,parr->int_store,parr->pixel);
    printf("\n oem of Vehicle:\t");
    switch(parr->oe)
    {
        case 1:printf("Samsung");
                break;
        case 2:printf("Oppo");
                break;
        case 3:printf("vivo");
                break;
        case 4:printf("redmi");
                break;
        case 5:printf("oneplus");
                break;
        case 6:printf("iphone");
                break;
        case 7:printf("nokia");
                break;
        default:printf("Invalid oem");
                break;

    }
}
double avg_price(const mobile_t* parr,int n)
{
    double sum=0;
    int i;
    for(i=0;i<n;i++)
    {
        sum+=(parr+i)->price;
    }
    return (sum/n);
}
void max_mAh(const mobile_t* parr,int n)
{
    unsigned int max=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(max<((parr+i)->battery))
            max=(parr+i)->battery;
    }
    printf("\nMaximum battery Capacity of mobile in mAh is:%d",max);
}

void max_MP(const mobile_t* parr,int n)
{
    unsigned int max=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(max<((parr+i)->pixel))
            max=(parr+i)->pixel;
    }
    printf("\nMaximum camera resolution of mobile in MP is:%d",max);
}
void min_str(const mobile_t* parr,int n)
{
    unsigned int min=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(min>((parr+i)->memory))
            min=(parr+i)->memory;
    }
    printf("\nMaximum camera resolution of mobile in MP is:%d",min);
}
void count_by_oem(const mobile_t* parr,oem_t keyoem,int n)
{
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
        if((parr+i)->oe==keyoem)
            count++;
    }
printf("\nTotal models in this oem are:%d",count);

}

/*void search_by_oem(const mobile_t* parr,const char* keyoem,int n)
{
        int i;
        int flag=0;
        for(i=0;i<n;i++)
        {
            if(strcmp((parr+i)->oem,keyoem)==0)
            {
                displayOne(&parr[i]);
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("Entered OEM not found");
        }
}*/

void find_max_by_model(const mobile_t* parr,int n,unsigned int keymodel)
{
mobile_t* rptr=NULL;
double Max_price=0;
int i;
for(i=0;i<n;i++)
{
    if(keymodel==(parr+i)->model)
    {
        if(Max_price<=((parr+i)->price))
            {
                rptr=parr+i;
            }
    }
}
if(rptr!=NULL)
{

printf("\nmobile Details for Maximum Price in %d is",keymodel);
displayOne(rptr);
}
else
    {
        printf("\nNo model found");
    }
}
oem_t oem_tenum(char* oe)
{
    oem_t keyoem;
    if(!(strcmp(oe,"Samsung")))
        keyoem=samsung;
    else if(!(strcmp(oe,"oppo")))
        keyoem=oppo;
    else if(!(strcmp(oe,"vivo")))
        keyoem=vivo;
    else if(!(strcmp(oe,"redmi")))
        keyoem=redmi;
    else if(!(strcmp(oe,"oneplus")))
        keyoem=oneplus;
    else if(!(strcmp(oe,"iphone")))
        keyoem=iphone;
    else if(!(strcmp(oe,"nokia")))
        keyoem=nokia;
return keyoem;
}
