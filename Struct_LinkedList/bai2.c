#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TEN 50

typedef struct SinhVien {
    char hoTen[MAX_TEN];
    int tuoi;
    float diemTB;
    struct SinhVien *next;
} SinhVien;

SinhVien *taoSinhVien() {
    SinhVien *sv = (SinhVien *)malloc(sizeof(SinhVien));
    printf("Nhap Ho ten: ");
    scanf(" %[^\n]s", sv->hoTen);
    printf("Nhap Tuoi: ");
    scanf("%d", &sv->tuoi);
    printf("Nhap Diem TB: ");
    scanf("%f", &sv->diemTB);
    sv->next = NULL;
    return sv;
}

void hienThiDanhSach(SinhVien *head) {
    printf("\n%-5s %-20s %-5s %-10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
    printf("----------------------------------------------------\n");
    int stt = 1;
    SinhVien *current = head;
    while (current != NULL) {
        printf("%-5d %-20s %-5d %-10.2f\n", stt++, current->hoTen, current->tuoi, current->diemTB);
        current = current->next;
    }
    printf("----------------------------------------------------\n");
}

SinhVien *chenSinhVienTruocTen(SinhVien **headRef, const char *tenCanTim) {
    SinhVien *newSV = taoSinhVien();
    if (*headRef == NULL) {
        *headRef = newSV;
        return *headRef;
    }
    if (strcmp((*headRef)->hoTen, tenCanTim) == 0) {
        newSV->next = *headRef;
        *headRef = newSV;
        return *headRef;
    }
    SinhVien *current = *headRef;
    while (current->next != NULL && strcmp(current->next->hoTen, tenCanTim) != 0) {
        current = current->next;
    }
    if (current->next != NULL) {
        newSV->next = current->next;
        current->next = newSV;
        printf("Da chen sinh vien truoc '%s'.\n", tenCanTim);
    } else {
        printf("Khong tim thay sinh vien co ten '%s'.\n", tenCanTim);
        free(newSV);
    }
    return *headRef;
}

SinhVien *xoaSinhVienTheoTen(SinhVien **headRef, const char *tenCanXoa) {
    if (*headRef == NULL) return NULL;
    if (strcmp((*headRef)->hoTen, tenCanXoa) == 0) {
        SinhVien *temp = *headRef;
        *headRef = (*headRef)->next;
        free(temp);
        printf("Da xoa sinh vien co ten '%s'.\n", tenCanXoa);
        return *headRef;
    }
    SinhVien *current = *headRef;
    while (current->next != NULL && strcmp(current->next->hoTen, tenCanXoa) != 0) {
        current = current->next;
    }
    if (current->next != NULL) {
        SinhVien *temp = current->next;
        current->next = temp->next;
        free(temp);
        printf("Da xoa sinh vien co ten '%s'.\n", tenCanXoa);
    } else {
        printf("Khong tim thay sinh vien co ten '%s'.\n", tenCanXoa);
    }
    return *headRef;
}

void giaiPhongDanhSach(SinhVien *head) {
    SinhVien *current = head;
    while (current != NULL) {
        SinhVien *temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    SinhVien *head = NULL;
    int choice;
    char tenTimKiem[MAX_TEN];

    do {
        printf("\nMENU:\n");
        printf("1. Them sinh vien vao dau danh sach\n");
        printf("2. Hien thi danh sach sinh vien\n");
        printf("3. Chen sinh vien truoc ten...\n");
        printf("4. Xoa sinh vien theo ten...\n");
        printf("5. Ket thuc\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: {
                SinhVien *newSV = taoSinhVien();
                newSV->next = head;
                head = newSV;
                break;
            }
            case 2:
                hienThiDanhSach(head);
                break;
            case 3:
                printf("Nhap ten sinh vien can tim de chen truoc: ");
                scanf(" %[^\n]s", tenTimKiem);
                head = chenSinhVienTruocTen(&head, tenTimKiem);
                hienThiDanhSach(head);
                break;
            case 4:
                printf("Nhap ten sinh vien can xoa: ");
                scanf(" %[^\n]s", tenTimKiem);
                head = xoaSinhVienTheoTen(&head, tenTimKiem);
                hienThiDanhSach(head);
                break;
            case 5:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 5);

    giaiPhongDanhSach(head);
    return 0;
}