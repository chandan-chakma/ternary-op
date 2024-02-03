//দুটি সংখ্যা এর মধ্যে বড়টি বের করার জন্য প্রোগ্রাম লিখ।

#include<stdio.h>
int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    /*if(n1>n2){
        printf("%d", n1);
    }
    else{
        printf("%d", n2);
    }
    */
    //using ternary operator
   int lo= (n1>n2?n1 : n2);
   printf("%d", lo);

    return 0;
}
