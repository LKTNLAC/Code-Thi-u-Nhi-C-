/*#include <math.h>
#include <stdio.h>
int main() {
    int result, sum = 0, i = 0;
    while (1) { //Run a loop infinitely
        printf("Enter a positive integer: ");
        scanf("%d", &result);
        sum = sum + result;
        i++;
        if (result < 0 ) {
            printf("Sum is ");
            printf("%d\n", sum - result);
            //printf("\n") //xuống dòng

            printf("There is ", i, " positive integer");
            printf("%d",i);
            printf(" positive integer");
            break;
        }
    }

    return 0;
}*/
# include <stdio.h>
# include <math.h>

int main(){
    int result,minn=10000000,sum=0;
    bool check = true;
    while (check == true) {
        printf("enter even integer: ");
        scanf("%d", &result);
            if (result % 2 == 0){
                sum += result;
                if(minn > result)
                    minn = result;
            } else {
                printf("sum and min of even integer %d%t%d", sum,"and " , minn);
                check = false;
            }
        }


    return 0;
}
