#include <stdio.h>

int main(){
    int a, i,flag=0;
    scanf("%d", &a);
    if (a==1 || a==0){
        flag==1;
        printf("Not Prime");
    }
    else{
        for (int i = 2; i<=a; i++){
        if (i%a==0){
            flag=1;
            break;
        }
    }
    }
if flag==0{
    printf("Prime");
}
else{
    printf("Not Prime");
}

}