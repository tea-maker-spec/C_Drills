//2025.10.24
//tea-maker-spec
//�ήɡG5����
//�Ĥ@���g�ɡGError, �]line 9�h�@��")" 
#include<stdio.h>

int main() {
    int year = 0;
    while(scanf("%d",&year)!=EOF)
    {
    	if((year < 1912) || (year > 2147483647))
		{
			break;
		}
		printf("%d\n",year - 1911);
	}
    return 0;
}

