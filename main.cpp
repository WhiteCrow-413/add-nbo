#include <stdio.h>
#include <stddef.h>     // for size_t
#include <stdint.h>     // for uint8_t
#include <netinet/in.h>


int main(int argc, char *argv[]) {
    FILE *fp1, *fp2;
    uint32_t bn1, bn2, sum;
    
    fp1=fopen(argv[1], "rb");
    fp2=fopen(argv[2], "rb");

    fread(&bn1, sizeof(bn1), 1, fp1);
    fread(&bn2, sizeof(bn2), 1, fp2);
    sum = htonl(bn1) + htonl(bn2);

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", htonl(bn1), htonl(bn1), htonl(bn2), htonl(bn2), sum, sum);

    fclose(fp1);
    fclose(fp2);

    return 0;
}