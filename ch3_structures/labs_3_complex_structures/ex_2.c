#include<stdio.h>
#include<string.h>

typedef struct{
    char name[30];
    char dep_name[30];
    int num_st;
    int credits;
    float cost_per_cred;
    char head_advisor_lm[20];
}Major;

typedef struct{
    char name[30];
    char address[30];
    Major majors[50];
    int num_of_majors;
}University;

Major newMajor(){
    Major new_major;
    printf("Enter the information for the new major.\n");
    printf("Major name: ");
    fgets(new_major.name,sizeof(new_major.name),stdin);
    new_major.name[strlen(new_major.name)-1]='\0';
    printf("Department name: ");
    fgets(new_major.dep_name,sizeof(new_major.dep_name),stdin);
    new_major.dep_name[strlen(new_major.dep_name)-1]='\0';
    printf("Number of students: ");
    scanf("%i",&new_major.num_st);
    getchar();
    printf("Credits: ");
    scanf("%i",&new_major.credits);
    getchar();
    printf("Cost per credit: ");
    scanf("%f",&new_major.cost_per_cred);
    getchar();
    printf("Head advisor last name: ");
    fgets(new_major.head_advisor_lm,sizeof(new_major.head_advisor_lm),stdin);
    new_major.head_advisor_lm[strlen(new_major.head_advisor_lm)-1]='\0';
    printf("\n");
    return new_major;
}

University newUniversity(){
    University new_university;
    printf("Enter the information for the new university.\n");
    printf("Enter the university name: ");
    fgets(new_university.name,sizeof(new_university.name),stdin);
    new_university.name[strlen(new_university.name)-1]='\0';
    // getchar();
    printf("Enter the university address: ");
    fgets(new_university.address,sizeof(new_university.address),stdin);
    new_university.address[strlen(new_university.address)-1]='\0';
    printf("\n");
    new_university.num_of_majors=0;
    return new_university;
}

void AddMajor(University* uni,Major major){
    if(uni->num_of_majors>50)printf("The number of majors is full.\n");
    int i;
    for(i=0;i<uni->num_of_majors;i++);
    uni->majors[i]=major;
    (uni->num_of_majors)++;
    printf("%s has been successfully added to %s.\n",major.name,uni->name);
}

University UpdateMajor(char nameMajor[], University U, float newCost){
    for(int i=0;i<U.num_of_majors;i++){
        if(strcmp(U.majors[i].name,nameMajor)==0){
            U.majors[i].cost_per_cred=newCost;
            return U;
        }
    }
}

void SearchMajor(University U,Major M){
    for(int i=0;i<U.num_of_majors;i++){
        if(strcmp(U.majors[i].name,M.name)==0){
            printf("%s is in the %s.\n",M.name,U.name);
            printf("The total cost per credit of this major is %.2f.\n",M.cost_per_cred);
        }
    }

}

void main(){
    University LU=newUniversity();
    Major CS=newMajor();
    AddMajor(&LU,CS);
    for(int i=0;i<3;i++)AddMajor(&LU,newMajor());
    float new_cost;
    char majorname[20];
    printf("Enter the name of the major you would like to update the cost per credit of: ");
    fgets(majorname,sizeof(majorname),stdin);
    majorname[strlen(majorname)-1]='\0';
    printf("Enter the new cost per credit: ");
    scanf("%f",&new_cost);
    LU=UpdateMajor(majorname,LU,new_cost);
    SearchMajor(LU,CS);
    printf("The %s is located at %s and it has %i majors.\n\n",LU.name,LU.address,LU.num_of_majors);
    for(int i=0;i<LU.num_of_majors;i++){
        printf("Major #%i\n",i+1);
        printf("Major name : %s\n",LU.majors[i].name);
        printf("Departmant name : %s\n",LU.majors[i].dep_name);
        printf("Number of students : %i\n",LU.majors[i].num_st);
        printf("Credits : %i\n",LU.majors[i].credits);
        printf("Cost per credit: %.2f\n",LU.majors[i].cost_per_cred);
        printf("Head advisor last name : %s.\n",LU.majors[i].head_advisor_lm);
        printf("\n");
    }
}