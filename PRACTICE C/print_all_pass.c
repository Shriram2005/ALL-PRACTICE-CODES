#include <stdio.h>

int main()
{
    int arr1[63],arr2[63],arr3[63],arr4[63],arr5[63],arr6[63],arr7[63],arr8[63];       
    int i,j,k,l,m,n,o,p;

    for (i = 0, j = 32; i <= 62, j <= 95; i++, j++)
    {
        arr1[i] = j;
        arr2[i] = j;
        arr3[i] = j;
        arr4[i] = j;
        arr5[i] = j;
        arr6[i] = j;
        arr7[i] = j;
        arr8[i] = j;
    }

    for(i = 62; i >= 0; i--){
        for(j = 62; i >= 0; j--){
            for(k = 62; i >= 0; k--){
                for(l = 62; i >= 0; l--){
                    for(m = 62; i >= 0; m--){
                        for(n = 62; i >= 0; n--){
                            for(o = 62; i >= 0; o--){
                                for(p = 62; i >= 0; p--){
                                
            printf("%c%c%c%c%c%c%c%c",arr1[i],arr2[j],arr3[k],arr4[l],arr5[m],arr6[n],arr7[o],arr8[p]);  
        } } } } } } }
        printf("\n");
    }


return 0;
}