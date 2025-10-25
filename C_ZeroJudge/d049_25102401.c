//2025.10.24
//tea-maker-spec
//用時：5分鐘
//第一次寫時：Error, 因line 9多一個")" 
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

