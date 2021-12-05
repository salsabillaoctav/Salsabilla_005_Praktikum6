#include<iostream>
#include<conio.h>
using namespace std;

void menara_hanoi(int disk, char dari, char bantu, char ke)
{
	if(disk>0);
{
		menara_hanoi(disk-1,dari,ke,bantu);
	printf("Pindahkan Disk %d darimpasak %c ke pasak %c\n", disk,dari,ke);
	menara_hanoi(disk-1,bantu,dari,ke);
}
}


int main()
{
	int disk;
	printf("Jumlah disk =");scanf ("%d",&disk);
	printf("\n");
	menara_hanoi(disk, 'A','B','C');

	return 0;
}
