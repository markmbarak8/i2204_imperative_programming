#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void printmaze(char **maze, int dim){
    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            if(maze[i][j]=='X') printf("%c ", maze[i][j]);
            else printf("%d ", maze[i][j]);
        }
        printf("\n");
    }
}

void findpath(char **maze,int dim,int sourcex,int sourcey,int currentx,int currenty,int targetx,int targety){
    if(currentx==targetx && currenty==targety){
        maze[targetx-1][targety-1]='X';
        for(int o=0;o<dim;o++){
            for(int u=0;u<dim;u++)
                if(maze[o][u]=='F'){
                    maze[o][u]=0;}
            }
        printf("Path found!\n");
        printf("maze solution\n");
        printmaze(maze,dim);
        return;
    }   
    int localcells[4][2]={{currentx-1,currenty},{currentx,currenty-1},{currentx+1,currenty},{currentx,currenty+1}};
    double mdist=-1;
    int idx=-1;
    for(int i=0;i<4;i++){
        if(localcells[i][0]<1 || localcells[i][0]>dim || localcells[i][1]<1 || localcells[i][1]>dim)continue;
        if(maze[localcells[i][0]-1][localcells[i][1]-1]==1)continue;
        if(maze[localcells[i][0]-1][localcells[i][1]-1]=='X' || maze[localcells[i][0]-1][localcells[i][1]-1]=='F')continue;
        double dist=sqrt(pow(targetx-localcells[i][0],2)+pow(targety-localcells[i][1],2));
        if(mdist==-1 || dist<mdist){
            mdist=dist;
            idx=i;
        }
    }
    if(mdist==-1){
        if(sourcex==currentx && sourcey==currenty){
            printf("Path not found!!\n");
            return;
        }
        for(int i=0;i<4;i++){
            if(localcells[i][0]<1 || localcells[i][0]>dim || localcells[i][1]<1 || localcells[i][1]>dim)continue;
            if(maze[localcells[i][0]-1][localcells[i][1]-1]==1)continue;
            double dist=sqrt(pow(targetx-localcells[i][0],2)+pow(targety-localcells[i][1],2));
            if(mdist==-1 || dist>mdist){
                mdist=dist;
                idx=i;
            }
        }
        maze[currentx-1][currenty-1]='F';
    }
    else{
    maze[currentx-1][currenty-1]='X';}
    findpath(maze,dim,sourcex,sourcey,localcells[idx][0],localcells[idx][1],targetx,targety);
    
    
}


void main(){
    int dim;
    while(1){
    printf("Enter the dimension of the matrix: ");
    scanf("%d",&dim);
    if(dim<=1)printf("Please enter a number greater than 1.\n");
    else break;
    }
    char maze[dim][dim];
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
    char **mazecopy= malloc(dim * sizeof(char *));
    for(int i = 0; i < dim; i++) {
        mazecopy[i] = malloc(dim * sizeof(char));
        for(int j = 0; j < dim; j++) {
            mazecopy[i][j] = maze[i][j];
        }
    }
    findpath(mazecopy,dim,x1,y1,x1,y1,x2,y2);
}
