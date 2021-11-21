// Shell Sort 

#include<stdio.h>
#include<string.h>
int main(){
    int a[25],n,i,gap,j,temp;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    printf("enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(gap=n/2;gap>=1;gap/=2){
        for(j=gap;j<n;j++){
            for(i=j-gap;i>=0;i=i-gap){
                if(a[i+gap]>a[i])
                    break;
                else{
                    temp=a[i+gap];
                    a[i+gap]=a[i];
                    a[i]=temp;
                }
            }
        }
    }
    printf("sorted array : \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

/*
		OUTPUT
		
	enter the number of elements : 7
enter the elements : 1
4
9
7
3
5
2
sorted array :
1       2       3       4       5       7       9

*/


