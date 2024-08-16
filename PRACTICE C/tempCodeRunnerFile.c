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

    for(i =0; i <= 62; i++){
        for(j = 0; j <= 62; j++){
            for(k = 0; k <= 62; k++){
                for(l = 0; l <= 62; l++){
                    for(m = 0; m <= 62; m++){
                        for(n = 0; n <= 62; n++){
                            for(o = 0; o <= 62; o++){
                                for(p = 0; p <= 62; p++){
            printf("%c%c%c%c%c%c%c%c",arr1[i],arr2[j],arr3[k],arr4[l],arr5[m],arr6[n],arr7[o],arr8[p]);  
        } } } } } } }
        printf("\n");
    }


return 0;
}