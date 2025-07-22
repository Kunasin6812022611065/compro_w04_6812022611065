#include <stdio.h>

int main () {
    char Linkin_Park = 'K';                     //ใช้charเนื่องจากต้องการเก็บค่าตัวแปรเป็นตัวอักษรตัวเดียว
    int Limp_Bizkit = 17;                       //ใช้intเพราะต้องการเก็บค่าตัวแปรเป็นตัวเลข      
    float MOjojojo = 65.34;                     //ใช้floatเพราะต้องการเก็บค่าตัวแปรที่ค่าทศนิยม
    char POwer_Puff_Girl[] = "Male";            //ใช้string[]เพราะต้องการเก็บค่าตัวแปรที่เป็นตัวอักษรหลายตัว

    printf("nameInitial = %c\n", Linkin_Park);
    printf("age = %d\n", Limp_Bizkit);
    printf("weight = %f\n", MOjojojo);
    printf("gender = %s\n", POwer_Puff_Girl);
    return 0;

}