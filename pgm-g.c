   #include <stdio.h>

   int main(){

    int i, j, temp = 0;

    // Size of the square image (pixels)
    int t = 1000; 
  
    // Suppose the 2D Array to be converted to Image is as given below 
    int image[t][t]; 
    
    int v[30];
    for (int i = 0; i < 30; ++i)
    {
      v[i] = fibo(i);
    }

    // Forming a white square inside a black square
    // Play here to form your own images!
    for (int i = 0; i < t; ++i){
      for (int j = 0; j < t; ++j){
        if(i>250 && j >250 && i<750 && j <750){
          image[i][j] = 255;
        }
        else{
          image[i][j] = 0;
        }
      }
    }
    

    FILE* pgmimg; 

    //Creating a file ready to be written with a name of "myimg.pgm"
    pgmimg = fopen("myimg.pgm", "wb"); 
  
    // Writing Magic Number to the File 
    fprintf(pgmimg, "P2\n");  
  
    // Writing t and t 
    fprintf(pgmimg, "%d %d\n", t, t);  
  
    // Writing the maximum gray value 
    fprintf(pgmimg, "255\n");

    int count = 0; 
    for (i = 0; i < t; i++) { 
        for (j = 0; j < t; j++) { 
            temp = image[i][j]; 
  
            // Writing the gray values in the 2D array to the file 
            fprintf(pgmimg, "%d ", temp); 
        } 
        fprintf(pgmimg, "\n"); 
    } 
    fclose(pgmimg); 
} 