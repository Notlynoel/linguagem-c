#include <stdio.h> 

int main(){ 
    int numberofrobots = 0; 
    int enginepower = 0; 
    int resestance = 0; 
    int height = 0; 
    int weight = 0; 
    int totalpower = 0;

    scanf("%d",&numberofrobots); 

    for(int i = 0; i < numberofrobots; i++){ 

    scanf("%d%d%d%d",&height,&weight,&enginepower,&resestance); 

    totalpower= totalpower + ((weight-height)*(enginepower + resestance));

    printf("%d\n", totalpower); 
    } 

    return 0; 
}
