#include <stdio.h>
int main () {
    int n;
    n = 8;
    int temp = 1;
    char matricks[n][n];
    //matricks[0][0] = 0;
// for (int i = 0;i < n; i ++){
//     for (int j =0; j < n; j++){
//         matricks[i][j] = '#';
//     }
// }

//----------------------------------------------------
//loop for setting elements to queen
for (int i = 0;i < n; i ++){
    if(temp < n){

    }
    else{
        temp = 0;
        }

    for (int j = 0;j < n; j ++){
        if ( j == temp) {
                matricks[i][j] = 'o';
        }
        else{
            matricks[i][j] = '#';
        }
    
    
    }
temp += 2;

}
//loops end
//-----------------------------------------------------
//printing the list
    int rowcount = n;
    for (int i = 0;i < rowcount; i ++){
        for (int j = 0;j < rowcount; j ++){
    printf( "%c ",matricks[i][j]);
    
    }

    printf("\n");

    }
    return 0;
}
//printing end