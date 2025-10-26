#include<stdio.h>
#define max_size 100

void printmaze(char maze[][max_size], int dim){
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            if(maze[i][j]=='X') printf("%c ", maze[i][j]);
            else printf("%d ", maze[i][j]);
        }
        printf("\n");
    }
}

int findpath(char maze[][max_size],int dim,int currentx,int currenty,int targetx,int targety){
    if(currentx==targetx && currenty==targety){
        maze[currentx-1][currenty-1]='X';
        return 1;
    }
    if(currentx<1  || currenty<1 || currentx>dim || currenty>dim){
        return 0;
    }
    if(maze[currentx-1][currenty-1]==1){
        return 0;
    }
    if(maze[currentx-1][currenty-1]=='X'){
        return 0;
    }
    maze[currentx-1][currenty-1]='X';
    
    if(findpath(maze,dim,currentx+1,currenty,targetx,targety)==1){
        return 1;
    }
    if(findpath(maze,dim,currentx,currenty+1,targetx,targety)==1){
        return 1;
    }
    if(findpath(maze,dim,currentx-1,currenty,targetx,targety)==1){
        return 1;
    }
    if(findpath(maze,dim,currentx,currenty-1,targetx,targety)==1){
        return 1;
    }
    
    maze[currentx-1][currenty-1]=0;
    return 0;
}

void main(){
    int dim;
    while(1){
    printf("Enter the dimension of the matrix: ");
    scanf("%d",&dim);
    if(dim<=1)printf("Please enter a number greater than 1.\n");
    else break;
    }
    char maze[dim][max_size];
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            do{
                int val;
                printf("Enter the value of the coordinate (%d,%d)(must be 0 or 1): ",i+1,j+1);
                scanf("%d",&val);
                if(val!=0 && val!=1){
                    printf("The value must be 0 or 1.\n");
                }
                else{
                    maze[i][j] = val;
                    break;
                }
            }while(1);
        }
    }
    int x1,y1;
    while(1){
        while(1){
            printf("Enter the row of the source cell: ");
            scanf("%d",&x1);
            if(x1<1)printf("The row must be greater than 0.\n");
            else if(x1>dim)printf("The row must be less than or equal to %d.\n",dim);
            else{
                break;
            }
    }
    while(1){
        printf("Enter the colummn of the source cell: ");
        scanf("%d",&y1);
        if(y1<1)printf("The column must be greater than 0.\n");
        else if(y1>dim)printf("The column must be less than or equal to %d.\n",dim);
        else{
            break;
        }
    }
    if(maze[x1-1][y1-1]==1)printf("The cell (%d,%d) is non navigable.\n",x1,y1);
    else break;
    }
    int x2,y2;
    while(1){
    while(1){
        printf("Enter the row of the target cell: ");
        scanf("%d",&x2);
        if(x2<1)printf("The row must be greater than 0.\n");
        else if(x2>dim)printf("The row must be less than or equal to %d.\n",dim);
        else{
            break;
        }
    }
    while(1){
        printf("Enter the column of the target cell: ");
        scanf("%d",&y2);
        if(y2<1)printf("The column must be greater than 0.\n");
        else if(y2>dim)printf("The column must be less than or equal to %d.\n",dim);
        else{
            break;
        }
    }
    if(maze[x2-1][y2-1]==1)printf("The cell (%d,%d) is non navigable.\n",x1,y1);
    else if(maze[x1-1]==maze[x2-1] && maze[y2-1]==maze[y1-1])printf("The source cell and the target cell must be different.\n");
    else break;
    }
    
    if(findpath(maze,dim,x1,y1,x2,y2)){
        printmaze(maze,dim);
    }
    else{
        printf("No solution");
    }
}
