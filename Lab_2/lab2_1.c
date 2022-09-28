// Write a program to approximate the functional value at any given x from given n no. of  data using Lagrange’s interpolation.

#include<stdio.h>
#include<math.h>

int main(){
    float x1[10],y1[10],x,y=0,a;
    int n;
    printf("Enter how many curve points you want to store:");
    scanf("%d",&n);
    printf("Enter values for initail points:\n");
    for(int i=1;i<=n;i++){
        printf("Enter point for x%d: ",i);
        scanf("%f",&x1[i]);
        printf("Enter point for y%d: ",i);
        scanf("%f",&y1[i]);
    }

    for(int i=1;i<=n;i++){
         printf("point of (x%d, y%d) = (%.2f, %.2f)\n",i,i,x1[i],y1[i]);

    }
    printf("Enter the vvalue of x: ");
    scanf("%f",&x);

    for(int i=1;i<=n;i++){
        a=1;

        for(int j=1;j<=n;j++){

            if(i!=j){
                a = a* (x - x1[j])/(x1[i] - x1[j]);
            }

        }
         y = y + a * y1[i];
    }

    printf("the value of y is %.2f\n",y);

    return 0;

}
