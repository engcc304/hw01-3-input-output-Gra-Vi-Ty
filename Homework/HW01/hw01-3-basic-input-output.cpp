/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/

#include <stdio.h>

int main() {
    char Fname[50] ;
    char Lname[50] ;

    printf( "First Name: " );
    scanf( "%s", Fname );

    printf( "Last Name: " );
    scanf( "%s", Lname );

    printf( "%s %s%s %s", Fname, Lname,"s", "TC, RMUTL, Chiang Mai, Thailand");
    return 0 ;
    
}