#include <stdio.h>

int main() {
    printf("NAMA : Tri Anung Nugroho\n");
    printf("NIM : 1322018\n\n");

    int i;
    //Input
    printf("masukan urutan hari: \n");
    scanf ("%d", &i);

switch(i) {
    case 1:
        printf("senin");break;
    case 2:
        printf("selasa");break;
    case 3:
        printf("rabu");break;
    case 4:
        printf("kamis");break;
    case 5:
        printf("jumaat");break;
     case 6:
        printf("sabtu");break;
    case 7:
        printf("minggu");break;
    //pernyataan
    default:printf("Angka diluar urutan hari");break;

    return 0;
    }
}
