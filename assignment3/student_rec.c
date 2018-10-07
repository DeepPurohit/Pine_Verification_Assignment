#include<stdio.h>
#include<stdlib.h>
#define MAX 450

int n;

int st_name_year(int);
int st_rollno(int);

struct student {
    int roll_no;
    char name[50];
    char dept[50];
    char course[10];
    int year_of_join;
};

struct student s[MAX];

int main(){
    system("clear");
    int op,op1;
    int ch,i=0,total;
    int yoj, s_rno;

    start:
  printf("Choose option\n\n");
  printf("1. Add student detail\n2. Seacrh student details\n3. Exit\n");
  scanf("%d",&op);

  switch(op){

    case 1:
            printf("Enter the number of students\n\n");
            scanf("%d",&n);
            total = i + n;
            while(i<total){
                printf("Enter details of %dth student\n",i+1);
                printf("Enter roll no.\t");
                scanf("%d",&s[i].roll_no);
                printf("Enter Name\t");
                scanf("%s",&s[i].name);
                printf("Enter Department\t");
                scanf("%s",&s[i].dept);
                printf("Enter courese enrolled in\t");
                scanf("%s",&s[i].course);
                printf("Enter year of joining\t");
                scanf("%d",&s[i].year_of_join);
                i++;
            }
            printf("Do you want to continue?(1/0)\t");
                scanf("%d",&ch);
            if(ch==1)
                goto start;
            else
                break;


    case 2:
                //printf("total = %d\n",total);
                printf("Choose your option\n\n");
                printf("1. Search by year of joining\n\n2. Search by roll no.\n\n");
                scanf("%d",&op1);

                switch(op1){
                    case 1:
                            printf("Enter year of joining\t");
                            scanf("%d",&yoj);
                            st_name_year(yoj);
                            break;
                    case 2:
                            printf("Enter roll no.\t");
                            scanf("%d",&s_rno);
                            st_rollno(s_rno);
                            break;
                    default: printf("Wrong option !!!");
                }
                goto start;
            break;
        case 3:
                exit (0);
    default: {printf("Wrong option !!!");}
    
  }
    return 0;
}

//function defination

int st_name_year(int year){
    printf("Names:\n");
    for(int i=0; i<n; i++){
        if(s[i].year_of_join == year)
            printf("%d %s\n",i+1,s[i].name);
    }
    printf("\n\n");
    return 0;
}

int st_rollno(int rollNo){
    for(int i=0; i<n; i++){
        if(s[i].roll_no == rollNo){
            printf("\nName\t%s",s[i].name);
            printf("\nDepartment\t%s",s[i].dept);
            printf("\nRoll no.\t%d",s[i].roll_no);
            printf("\nCourse\t%s",s[i].course);
            printf("\nYear of joining\t%d",s[i].year_of_join);
        }
    }
    printf("\n\n");
    return 0;
}