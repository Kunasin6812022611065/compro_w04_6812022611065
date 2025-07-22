#include <stdio.h>           


void countCall() {              
    
    static int counter = 0;
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
// ผลลัพธ์ของ static จะมีค่าเริ่ม = 1 ในการประกาศฟังชั่นรอบที่ 1 จะใช้ค่าเริ่มต้นมาคำนวนโดย "จำ" ค่าเริ่มต้นไว้ ดังนั้นในการประกาศฟังก์ชั่นในรอบที่ 2 จึงจะนำค่าเริ่มต้นมารวมกับค่าที่จำไว้