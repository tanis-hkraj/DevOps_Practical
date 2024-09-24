#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}

int main(){

    printf("%d\n",add(4,3));
    printf("%d\n",sub(4,3));
    printf("%d\n",mul(5,6));


    return 0;
}int mul(int a, int b){
	return a*b;
}
