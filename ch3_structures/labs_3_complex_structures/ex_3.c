#include<stdio.h>
#include<math.h>

typedef struct{
    int degree;
    float coefficients[100];
}Poly;

Poly CreatePoly(){
    Poly newPolynomial;
    printf("Enter the degree of the new polynomial: ");
    scanf("%i",&newPolynomial.degree);
    printf("Enter the coefficients of the polynomial.\n");
    for(int i=0;i<=newPolynomial.degree;i++){
        printf("Coefficient %i: ",i);
        scanf("%f",newPolynomial.coefficients+i);
    }
    return newPolynomial;
}

Poly SumPoly(Poly P1, Poly P2){
    Poly sumpolynomial;
    int max,min,P1max;
    if(P1.degree>P2.degree){
        max=P1.degree;
        min=P2.degree;
        P1max=1;
    }
    else if(P2.degree>P1.degree){
        max=P2.degree;
        min=P1.degree;
        P1max=0;
    }
    else{
        max=min=P1.degree;
        P1max=1;
    }
    sumpolynomial.degree=max;
    for(int i=0;i<=min;i++){
        sumpolynomial.coefficients[i]=P1.coefficients[i]+P2.coefficients[i];
    }
    for(int j=min+1;j<max;j++){
        if(P1max)sumpolynomial.coefficients[j]=P1.coefficients[j];
        else sumpolynomial.coefficients[j]=P2.coefficients[j];
    }
    return sumpolynomial;
}

void DerivePoly(Poly* P){
    for(int i=0;i<P->degree;i++){
        P->coefficients[i]=P->coefficients[i+1]*(i+1);
    }
    P->coefficients[P->degree]=0.0;
    (P->degree)--;
}

float EvalPoly(Poly* P, float a){
    float result=0;
    for(int i=0;i<P->degree;i++){
        result+=P->coefficients[i]*pow(a,i);
    }
    return result;
}

void main(){
    Poly P1=CreatePoly();
    printf("The polynomial P1: ");
    for(int i=0;i<=P1.degree;i++)printf("%+.2fx^%i",P1.coefficients[i],i);
    printf("\n");
    Poly P2=CreatePoly();
    printf("The polynomial P2: ");
    for(int j=0;j<=P2.degree;j++)printf("%+.2fx^%i",P2.coefficients[j],j);
    printf("\n");
    Poly sum=SumPoly(P1,P2);
    printf("The sum of P1 and P2 is: ");
    for(int k=0;k<=sum.degree;k++)printf("%+.2fx^%i",sum.coefficients[k],k);
    printf("\n");
    DerivePoly(&P1);
    printf("The derivative of P1 is: ");
    for(int i=0;i<=P1.degree;i++)printf("%+.2fx^%i",P1.coefficients[i],i);
    printf("\n");

}