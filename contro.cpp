#include <iostream>
using namespace std ;
int main () {
    int a = 30 ;
    int *p = &a ; // khởi tạo con trỏ p và gán địa chỉ của biến a vào con trỏ p
    cout <<"Gia tri cua bien a : " << a << endl ; // a = 30 ;
    cout <<"Dia chi cua bien a : " << &a << endl ; // &a = 1 đoạn mã hexa 0x16f1c73a8
    cout <<"Gia tri cua con tro p : " << p << endl ;// p = &a 
    cout <<"Dia chi cua con tro p : " << &p << endl ;// vì p cũng là 1 biến nên nó cũng có địa chỉ và = 1 đoạn mã hexa 0x16f1c73a0
    cout <<"Gia tri tai dia chi cua con tro p tro toi : " << *p << endl ; // *p = a
    cout <<"Gia tri tai dia chi cua a : " << *&a << endl ;// *&a = a 
    *p += 5 ;
    cout <<"Gia tri cua bien a : " << a << endl ; // a = 35 

    // sử dụng 1 con trỏ p để thay đổi nhiều biến khác nhau 
    int b = 10 ;
    p = &b ; // lúc này, sau khi đã khởi tạo rồi thì kh cần dùng dấu sao nữa vì biến p đã dc định nghĩa là con trỏ rồi
    // biến p lúc này sẽ trỏ vào địa chỉ của biến b và kh còn trỏ vào địa chỉ biến a như ở trên đã khởi tạo 
    *p += 5 ;
    cout <<"Gia tri cua bien a : " << a << endl ; // a = 35 
    cout <<"Gia tri cua bien b : " << b << endl ; // b = 15 
    cout <<"Gia tri tai dia chi cua con tro p tro toi : " << *p << endl ; // lúc này con trỏ p dã trỏ tới biến b chứ kh còn trỏ tới biến a nữa

    //int *p = 0 ;  con trỏ NULL
    return 0 ;
} 