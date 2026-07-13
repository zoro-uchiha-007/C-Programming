#include<stdio.h>
enum day{
    mon=1,
    tue,
    wed,
    thu,
    fri,
    sat
};
int main(){
    enum day today=wed;
    printf("%d",today);
    return 0;
}