#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TEN_HANG 50

typedef struct SoLieu {
    char tenHang[MAX_TEN_HANG];
    float donGia;
    int soLuong;
    float thanhTien;
} SoLieu;

void nhapSoLieu(SoLieu *sl) {
    printf("Nhap ten hang: ");
    scanf(" %[^\n]s", sl->tenHang);
    printf("Nhap don gia: ");
    scanf("%f", &sl->donGia);
    printf("Nhap so luong: ");
    scanf("%d", &sl->soLuong);
    sl->thanhTien = sl->soLuong * sl->donGia;
}

void hienThiSoLieu(SoLieu *sl, int stt) {
    printf("%-5d %-20s %-10.2f %-10d %-10.2f\n", stt, sl->tenHang, sl->donGia, sl->soLuong, sl->thanhTien);
}

int compareSoLieu(const void *a, const void *b) {
    return strcmp(((SoLieu *)a)->tenHang, ((SoLieu *)b)->tenHang);
}

int main() {
    int n;
    printf("Nhap so luong mat hang: ");
    scanf("%d", &n);
    SoLieu *danhSach = (SoLieu *)malloc(n * sizeof(SoLieu));
    float tongTien = 0;

    printf("Nhap thong tin cho %d mat hang:\n", n);
    for (int i = 0; i < n; i++) {
        nhapSoLieu(&danhSach[i]);
        tongTien += danhSach[i].thanhTien;
    }

    printf("\n%-5s %-20s %-10s %-10s %-10s\n", "STT", "Ten Hang", "Don Gia", "So Luong", "Thanh Tien");
    for (int i = 0; i < n; i++) {
        hienThiSoLieu(&danhSach[i], i + 1);
    }
    printf("%-45s %-10.2f\n", "Tong tien", tongTien);

    qsort(danhSach, n, sizeof(SoLieu), compareSoLieu);

    printf("\nDANH SACH SAU KHI SAP XEP THEO TEN HANG:\n");
    printf("%-5s %-20s %-10s %-10s %-10s\n", "STT", "Ten Hang", "Don Gia", "So Luong", "Thanh Tien");
    tongTien = 0;
    for (int i = 0; i < n; i++) {
        hienThiSoLieu(&danhSach[i], i + 1);
        tongTien += danhSach[i].thanhTien;
    }
    printf("%-45s %-10.2f\n", "Tong tien", tongTien);

    free(danhSach);
    return 0;
}