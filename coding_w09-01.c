#include <stdio.h>

int main() {
    int start, stop;

    while (1) {
        printf("Enter start number: ");
        scanf("%d", &start);
        printf("Enter stop number: ");
        scanf("%d", &stop);
        printf("start number is %d and stop number %d\n", start, stop);
        printf("---------------\n");

        if (start == stop) { 
            printf("Your Start number is equal to Stop number, please try again!\n\n");
            continue; 
        } else if (start > stop) {
            printf("Your Start number is greater than Stop number, please try again!\n\n");
            continue;
        } else {
           
            printf("Sequence from start to stop:");
            while (start <= stop) {
            printf("%d ", start);
            start++;
            }
            break; 
        }
    }
    printf("\nThank you.\n");
    return 0;
}
/*
กำหนดตัวแปร start, stop
วนลูปไม่สิ้นสุดจนกว่าจะเจอ break
แสดงข้อความ Enter start number
รับค่าตัวเลขเริ่มต้นจากผู้ใช้
แสดงข้อความ Enter stop number
รับค่าตัวเลขเริ่มต้นจากผู้ใช้
แสดงค่าที่ผู้ใช้กรอกเข้ามา
กรณีที่ start=stop
แสดงข้อความ Your Start number is equal to Stop number, please try again!
กลับไปเริ่มลูปรับค่าใหม่
กรณีที่ start>stop 
แสดงข้อความ Your Start number is greater than Stop number, please try again!
กลับไปเริ่มลูปรับค่าใหม่
กรณีที่ start<stop เป็นจริง
แสดงข้อความ Sequence from start to stop:
ลูปจะทำงานต่อเมื่อ start<=stop เป็นจริง
แสดงผลลัพธ์ค่าปัจจุบันของ start
เพิ่มค่าของ start ขึ้นทีละ 1
 ออกจาก loop
แสดงข้อความ Thank you.
จบการทำงาน
*/