/*142894 shashikala julajuli */
#include "mobi.h"

int main()
{
    int keymodel;
    double avg_price_mobile;
    oem_t keyoem;
    unsigned int size;
    int choice;
    int loop_cond=1;
    printf("\t\t\t\tWelcome To mobile Data Analytic Lab\n");
    mobile_t varr[MAX_SIZE];
    printf("\nEnter %d mobile data to analyse the Data",MAX_SIZE);
    readAll(varr,MAX_SIZE);
    printf("\n Enter option Num to do the desired computation");
    printf("\n1.Display All mobile properties");
    printf("\n2.Find Average price of All mobile");
    printf("\n3.Find Maximum battery Capacity of mobile in mAh");
    printf("\n4.Find Maximum camera resolution of mobile in MP");
    printf("\n5.Count the model by manufacture in given price");
    printf("\n6.Model with minimum storage capacity");
    printf("\n7.Exit");

    char col[20];
    while(loop_cond)
    {
    printf("\nEnter Your choice :");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:displayAll(varr,MAX_SIZE);
                break;
        case 2:avg_price_mobile=avg_price(varr,MAX_SIZE);
                printf("\nAverage price of all mobile=%lf",avg_price_mobile);
                break;
        case 3:max_mAh(varr,MAX_SIZE);
                break;
        case 4:max_MP(varr,MAX_SIZE);
                break;
        case 5:printf("\nEnter model to find Maximum price");
                scanf("%d",&keymodel);
                find_max_by_model(varr,MAX_SIZE,keymodel);
                break;
        case 6:min_str(varr,MAX_SIZE);
                break;
        case 7:loop_cond=0;
                printf("Thank You !!Visit Again");
                exit(0);
            break;
        default:printf("Invalid Option try again");
            break;
    }
    }
    return 0;
}




