//
//  main.c
//  HanoiTower
//
//  Created by Abdullah Yılmaz on 22.12.2022.
//

#include <stdio.h>
#include <time.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int disk, char xrod, char yrod, char zrod)
{
    
        if (disk == 1)
        {
            printf("\n Move disk 1 from rod %c to rod %c", xrod, yrod);
            return;
        }
        towerOfHanoi(disk-1, xrod, zrod, yrod);
    
        printf("\n Move disk %d from rod %c to rod %c", disk, xrod, yrod);
        towerOfHanoi(disk-1, zrod, yrod, xrod);
    
}

int main()
{   int disk;
    printf("n:");
    scanf("%d",&disk);
    int k=1;
    for(k=0;k<disk;k++){
      //  int n;
        printf("hanoi");
        towerOfHanoi(disk,'A','B','C');
        double zaman;
        clock_t start_t, end_t;
        double total_t;
        int i;
        start_t = clock();
        
        
        printf("\nGoing to scan a big loop, start_t = %ld\n", start_t);
        for(i=0; i< 10000000; i++) {
        }
        end_t = clock();
        printf("\nEnd of the big loop, end_t = %ld\n", end_t);
        
        total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
        zaman = total_t;
        printf("zaman = %f",zaman);
        
        
        printf("\nExiting of the program...\n");
    }
    return 0;
}
