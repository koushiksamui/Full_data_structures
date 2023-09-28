#include <stdio.h>

// int main() {
//     int z=10;
//     int *x;
//     int *y=10;
//     *x=y;
//     printf("%d",*x)
// ;
//     return 0;
// }


void func(int *num){
    printf("%d",num);
}
int main(int argc, char const *argv[])
{
    int arr[5] ={3,44,56,7,44};
    func(&arr[3]);
    return 0;
}

