/*142894 shashikala j*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 2
enum oem{ samsung=1,oppo=2,vivo=3,redmi=4,oneplus=5,iphone=6,nokia=7};
typedef enum oem oem_t;
typedef struct{
unsigned int model;
unsigned int dis_size;
double price;
unsigned int battery;
unsigned int memory;
unsigned int int_store;
unsigned int pixel;
oem_t oe;
}mobile_t;
void readAll(mobile_t*,int);
void readOne(mobile_t*);
void displayAll(const mobile_t*,int);
void displayOne(const mobile_t*);
void max_mAh(const mobile_t*,int);

void max_MP(const mobile_t*,int);
void min_str(const mobile_t*,int);

double avg_price(const mobile_t*,int);
void count_by_oem(const mobile_t*,oem_t,int);
//void search_by_oem(const mobile_t*,const char*,int);
