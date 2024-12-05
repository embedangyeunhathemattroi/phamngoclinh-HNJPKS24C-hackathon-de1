#include<stdio.h>

int main(){
	int lua_chon;
	int n = 0;
	int arr[100];
	int i, j;
	int max;
	int num, is_prime = 1;  
	int da_nhap;
	
	
	 while (1) {
		
		printf("\n MENU \n");
		printf("\n");
		printf("1. nhap so phan tu can nhap va gia tri cac phan tu :\n");
		printf("2. in ra gia tri cac phan tu: \n");
		printf("3.dem so luong cac so hoan hao trong mang.Biet so hoan hao co csc uoc bang chinh no: \n");
		printf("4. in ra gia tri lon thu 2 trong mang: \n");
		printf("5. them mot phan tu vao mang: \n");
		printf("6. xoa mot phan tu trong mang :\n");
		printf("7. sap xep mang theo thu tu tang dan: \n");
		printf("8. tim kiem phan tu(nguoi dung nhap) va su ton tai phan tu do :\n");
		printf("9.sap xep lai mang va hien thi toan bo phan tu trong mang sao cho toan bo so chan dung truoc, so le dung sau: \n");
		printf("10. dao nguoc thu tu phan tu :\n");
		printf("11. thoat \n");
		printf("\n");
		//tien hanh cho nguoi dung nhap vao lua chon cua minh
		printf("lua chon cua ban la: ");
		scanf("%d", &lua_chon);
		
		 
		
		switch(lua_chon){
			case 1:
				//nhap so phan tu can nhap va gan gia tri cho cac phan tu
				
				printf("kich thuoc mang ma ban mong muon la: \n");
				scanf("%d", &n);
		
				for(i = 0; i < n; i++){
					printf(" phan tu %d la: \n", i+1);
					scanf("%d", &arr[i]);
				}
				break;
			
			case 2:
				// in ra cac gia tri phan tu
				if(n == 0){
					printf("mang cua ban dang trong, moi ban quay lai muc 1 de nhap phan tu");
				} else {
				printf("Cac phan tu co trong mang la: \n");
				for(i = 0; i < n; i++){
					printf("number[%d] = %d\n", i, arr[i]);
				}
			}
				break;
			
			case 3:
			//dem so luong cac so hoan hao trong mang.Biet so hoan hao co csc uoc bang chinh no chua biet cach lam
			 
			case 4 :
			//in ra gia tri lon thu 2 trong mang chua ro cach lam de in ra gia tri lon thu 2 
			if(n == 0){
				printf("mang cua ban dang trong, ban hay quay lai muc 1 de nhap phan tu");
			} else {
			max = arr[0];
			for(i = 0; i < n; i++){
				if(arr[i] > max){
					max = arr[i];
				}
			}
		}
			printf("phan tu lon thu hai trong mang hien tai la: %d", max);
			break;
			
			
			 case 5:
			 	//them mot phan tu vao mang
			 	 if (n < 100) {
                    int a;
                    printf("Nhap gia tri phan tu moi: ");
                    scanf("%d", &a);
                   
                    arr[n] = a;
                   
                    n++;
                    printf("%d da duoc ban them vao mang: \n", a);
                } else {
                    printf("khong the them phan tu do mang da max: \n");
                }
                break;
                
            case 6:
            	//xoa mot phan tu trong mang
            	if(n == 0){
            		printf("khong co phan tu nao trong mang de xoa, moi ban quay tro lai muc 1 de nhap them phan tu vao mang");
				} else {
				if(n > 0){
					int index;
					printf("moi ban nhap vao phan tu ma ban muon xoa(luu y chi tu 0 den %d) la: ", n - 1);
					scanf("%d", &index);
					if(index >= 0 && index < n){
						for(i = index; i < n - 1; i++){
							arr[i] = arr[i + 1];
							n--;
							printf("phan tu o vi tri %d da duoc xoa", index);
						} 
					} else{
							printf(" vi tri ban chon khong hop le, moi ban chon lai\n");
						}
				}
			}
				
				break;
			
			case 7:
				//sap xep cac phan tu trong mang theo thu tu tang dan
				if(n == 0){
            		printf("khong co phan tu nao trong mang de xoa, moi ban quay tro lai muc 1 de nhap them phan tu vao mang");
				} else {
				printf("Cac phan tu co trong mang la: \n");
				for(i = 0; i < n; i++){
					printf("number[%d] = %d\n", i, arr[i]);
				}
				printf("\n");
				printf("cac phan tu khi da duoc sap xep la: \n");
				int temp;
				for(i = 0; i < n; i++){
					for(j = 0; j < n - 1 - i; j++){
						if(arr[j] > arr[j + 1]){
						temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
					}
				}
				for(i = 0; i < n; i++){
					printf("number[%d] = %d\n", i, arr[i]);
				}
			}
				break;
			
			case 8:
				//tim gia tri trong mang
				if (n == 0) {
                    printf("Mang cua ban dang trong, moi ban quay tro lai muc 1 de nhap phan tu\n");
                } else {
                    int x, found = 0;
                    printf("Nhap phan tu can tim: ");
                    scanf("%d", &x);
                    for (i = 0; i < n; i++) {
                        if (arr[i] == x) {
                            printf("Tim thay %d tai vi tri %d\n", x, i);
                            found = 1;
                        }
                    }
                    if (!found) printf("Khong tim thay\n");
                }
                break;
                
            case 9:
            	//sap xep lai mang va hien thi toan bo phan tu trong mang sao cho toan bo so chan dung truoc, so le dung sau chua ro cach lam 
            	if(n == 0){
            		printf("khong co phan tu nao trong mang de xoa, moi ban quay tro lai muc 1 de nhap them phan tu vao mang");
				} else {
				printf("Cac phan tu co trong mang la: \n");
				for(i = 0; i < n; i++){
					printf("number[%d] = %d\n", i, arr[i]);
				}
				printf("\n");
				printf("cac phan tu khi da duoc sap xep la: \n");
				int temp;
				for(i = 0; i < n; i++){
					for(j = 0; j < n - 1 - i; j++){
						if(arr[j] > arr[j + 1]){
						temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
					}
				}
				for(i = 0; i < n; i++){
					printf("number[%d] = %d\n", i, arr[i]);
				}
			}
				break;
				
			case 10:
			//	dao nguoc thu tu phan tu : chua biet lam
            case 11:
            	printf("Thoat chuong trinh.\n");
                return 0;

            default:
                printf("Lua chon khong hop le. Moi chon lai.\n");
        }
    }

    return 0;
}
            	
				
				
				
				
				
				
			
