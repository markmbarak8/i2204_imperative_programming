#include<stdio.h>
#include<math.h>

typedef struct{
    float x,y,z;
    char name,color;
}Point;

void readinfo(Point *point){
    printf("x: ");
    scanf("%f",&(point->x));
    printf("y: ");
    scanf("%f",&(point->y));
    printf("z: ");
    scanf("%f",&(point->z));
    printf("name: ");
    scanf(" %c",&(point->name));
    printf("color: ");
    scanf(" %c",&(point->color));
}

float distance(Point p1,Point p2){
    float dx=(p1.x)-(p2.x);
    float dy=(p1.y)-(p2.y);
    float dz=(p1.z)-(p2.z);
    return sqrtf(powf(dx,2)+powf(dy,2)+powf(dz,2));
}

void Same(Point p1,Point p2){
    if(p1.x==p2.x && p1.y==p2.y && p1.z==p2.z){
        printf("The two points are in the same location in 3d.\n");
    }
    else{
        printf("The two points are at different locations in 3d.\n");
    }
    if(p1.color==p2.color){
        printf("The two points have the same color.\n");
    }
    else{
        printf("The two points have different colors.\n");
    }
}

void main(){
    Point p1,p2;
    printf("Enter the information for the first point:\n");
    readinfo(&p1);
    printf("Enter the information for the second point:\n");
    readinfo(&p2);
    float dist=distance(p1,p2);
    printf("The distance between p1 and p2 is %.2f.\n",dist);
    Same(p1,p2);
}