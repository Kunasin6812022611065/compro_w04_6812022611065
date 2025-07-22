#include <stdio.h>

int main() {
    int intscore = 90.5;
    float floatscore = 90.5;

    printf("Value = %c\n",intscore);
    printf("Value= %f\n", floatscore);
    
    return 0;
}

// int จะสามารถแสดงผลที่เป็นตัวเลขจำนวนเต็ม
// flaot จะสามารถแสดงผลที่เป็นทศนินมได้ 6 ตำแหน่ง
// หากนำ int มาใช้แทน float จะไม่สามารถแสดงผลไปตามที่กำหนดตัวแปรได้