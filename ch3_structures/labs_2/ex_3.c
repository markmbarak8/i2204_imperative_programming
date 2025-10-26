#include<stdio.h>
#include<string.h>

typedef struct{
    int id;
    char name[30];
    char dep_name[50];
    int n_students;
    int credits;
    int cred_cost;
    char resp_name[20];
}Degree;

void ReadDegrees(Degree Ldeg[],int n){
    for(int i=0;i<n;i++){
        printf("Enter the information about degree #%i.\n",i+1);
        printf("Degree id: ");
        scanf("%i",&Ldeg[i].id);
        getchar(); // consume newline left by scanf
        printf("Degree name: ");
        fgets(Ldeg[i].name,sizeof(Ldeg[i].name),stdin);
        Ldeg[i].name[strlen(Ldeg[i].name)-1]='\0';
        printf("Department name: ");
        fgets(Ldeg[i].dep_name,sizeof(Ldeg[i].dep_name),stdin);
        Ldeg[i].dep_name[strlen(Ldeg[i].dep_name)-1]='\0';
        printf("Number of students: ");
        scanf("%i",&Ldeg[i].n_students);
        getchar(); // consume newline left by scanf
        printf("Credits: ");
        scanf("%i",&Ldeg[i].credits);
        getchar(); // consume newline left by scanf
        printf("Credit cost: ");
        scanf("%i",&Ldeg[i].cred_cost);
        getchar(); // consume newline left by scanf
        printf("Responsible name: ");
        fgets(Ldeg[i].resp_name,sizeof(Ldeg[i].resp_name),stdin);
        Ldeg[i].resp_name[strlen(Ldeg[i].resp_name)-1]='\0';
        printf("\n");
    }
}

void search_deg(Degree Ldeg[],int n,char name[]){
    for(int i=0;i<n;i++){
        if(!strcmp(Ldeg[i].name,name)){
            printf("The id of the degree is %i.\n",Ldeg[i].id);
            printf("The name of the degree is %s.\n",Ldeg[i].name);
            printf("It belongs to the department of %s.\n",Ldeg[i].dep_name);
            printf("It needs %i credits.\n",Ldeg[i].credits);
            printf("You need to pay %i$ to obtain the degree.\n",Ldeg[i].cred_cost*Ldeg[i].credits);
            return;
        }
    }
    printf("Degree not found!!\n");
}

void update_cost(Degree Ldeg[],int n,int id,int new_cost){
    for(int i=0;i<n;i++){
        if(Ldeg[i].id==id){
            Ldeg[i].cred_cost=new_cost;
            return;
        }
    }
}

void display_info(Degree Ldeg[],int n){
    for(int i=0;i<n;i++){
        printf("Degree #%i:\n",i+1);
        printf("id : %i\n",Ldeg[i].id);
        printf("name : %s\n",Ldeg[i].name);
        printf("department name: %s\n",Ldeg[i].dep_name);
        printf("Number of students : %i\n",Ldeg[i].n_students);
        printf("Credits : %i\n",Ldeg[i].credits);
        printf("Credit cost : %i\n",Ldeg[i].cred_cost);
        printf("Responsible name : %s\n",Ldeg[i].resp_name);
        printf("\n");
    }
}

void main(){
    int n=5;
    Degree Ldeg[n];
    ReadDegrees(Ldeg,n);
    char name[20];
    printf("Enter the degree name: ");
    fgets(name,20,stdin);
    name[strlen(name)-1]='\0';
    search_deg(Ldeg,n,name);
    int id,new_cost;
    printf("Enter the id of the degree: ");
    scanf("%i",&id);
    getchar(); // consume newline left by scanf
    printf("Enter the new cost per credit: ");
    scanf("%i",&new_cost);
    getchar(); // consume newline left by scanf
    update_cost(Ldeg,n,id,new_cost);
    display_info(Ldeg,n);
}