#include <stdio.h>           


void countCall() {              
    
    int counter = 0;
    counter++;
    printf("Call Fuctiong: Counter = %d\n", counter);
}

int main(){
    printf("Starting funtion calls...\n");
    countCall();
    printf("After first call: \n");
    countCall();
    return 0;
}
// ความแตกต่างของผลลัพธ์ Non-static และ static
// ผลลัพธ์ของ Non-static จะมีค่าเริ่ม = 1 และหลังจากการเรียกใช้ฟังก์ชั่นจะยังในรอบที่ 1 จะใช้ค่าเริ่มต้นในการประกาศฟังก์ชั่น โดยไม่มีการจำค่านั้น ดังนั้นหลังจากการประกาศฟังก์ชั่นในรอบที่ 2 จะยังคงประกาศค่าเริ่มต้นเช่นเดิม
