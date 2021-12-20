#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct room_type{
    char room_type_id[10];
    char room_type_name[10];
    int room_type_price;
};
struct customer{
    char customer_id[10];
    char customer_name[255];
    int customer_age;
    char customer_cause_of_death[255];
    char customer_resting_place[255];
    int customer_died_year;
    room_type r;
};
customer *create(const char *customer_id,const char *customer_name,int customer_age,const char *customer_cause_of_death,const char *customer_resting_place,int *customer_died_year,const char *room_type_id,const char *room_type_name,int *room_type_price){
    customer *new_c=(customer*)malloc(sizeof(customer));
    strcpy(new_c->customer_id,customer_id);
    strcpy(new_c->customer_name,customer_name);
    new_c->customer_age = customer_age;
    strcpy(new_c->customer_cause_of_death,customer_cause_of_death);
    strcpy(new_c->customer_resting_place,customer_resting_place);
    strcpy(new_c->r.room_type_id,room_type_id);
    return new_c;
};
void add_user(){}
void read_user(){}
void update_user(){}
void remove_user(){}
void menu(){
    int choice;
    do{
    printf("Hotel Del Jojo\n");
    printf("1. Add new customer\n");
    printf("2. Read data\n");
    printf("3. Update data\n");
    printf("4. Remove data\n");
    printf("5. Exit\n");
    printf("\n");
    printf("choice [1-5] >> ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        add_user();
        break;
        case 2:
        read_user();
        break;
        case 3:
        update_user();
        break;
        case 4:
        remove_user();
        break;
    }
    }while(choice!=5);
}


int main(){
    menu();
    return 0;
}