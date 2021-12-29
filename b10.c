#include <stdio.h>
 
const int MAX = 100;
 
 
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

 
int TimKiem(int a[], int n, int v){
    for(int i = 0;i < n; ++i){
        if(a[i] == v){
            return i;
        }
    }
    return -1;
}
 
int main(){
    int arr[MAX];
    int n;
    printf("\nNhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > MAX);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    
    int v;
    printf("\nNhap vao gia tri can tim: ");
    scanf("%d", &v);
    printf("\nTim thay so %d tai chi so %d!", v, TimKiem(arr, n, v));
}
