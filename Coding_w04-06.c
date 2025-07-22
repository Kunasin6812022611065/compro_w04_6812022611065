#include <stdio.h>

const int GLOBAL_RATE = 10;

void calculate() {
    const int LOCAL_BONUS = 50;
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();

    printf("GLOBAL_RATE = %d\n",GLOBAL_RATE);

    return 0;
}
// Global_Rate และ Local_Bonus ต่างกันอย่างไร : GLOBAL_RATE เป็นตัวแปร const ระดับ Global ใช้ได้ทุกฟังก์ชั่นในไฟล์ ส่วน LOCAL_BONUS เป็นตัวแปร conts ภายในฟังก์ชั่น calculate()
// หากเราเปลี่ยน Global_bnus เป็น 20 และเปลี่ยน Local_global=8:จะสามารถCompireได้ปกติแค่ค่าเปลี่ยนในterminal
// ทำไม LOCAL_BONUSถึงไม่สามารถเรียกใช้ใน main() ได้ : เพราะ LOCAL_BONUS เป็นตัวแปร conts ภายในฟังก์ชั่น calculate()