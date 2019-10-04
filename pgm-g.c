   #include <stdio.h>
  
   #define MAGIC_NUMBER "P2"
   #define MAX_VALUE 255
   #define IMAGE_SIZE 1000

   int main(){

    int i, j, temp = 0;
  
    // Suppose the 2D Array to be converted to Image is as given below 
    int image[IMAGE_SIZE][IMAGE_SIZE]; 
    

    // Forming a white square inside a black square
    // Play here to form your own images!
    for (int i = 0; i < IMAGE_SIZE; ++i){
      for (int j = 0; j < IMAGE_SIZE; ++j){
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
    fprintf(pgmimg, "%s\n", MAGIC_NUMBER);  
  
    // Writing the size of the image 
    fprintf(pgmimg, "%d %d\n", IMAGE_SIZE, IMAGE_SIZE);  
  
    // Writing the maximum gray value 
    fprintf(pgmimg, "%d\n", MAX_VALUE);

    int count = 0; 
    for (i = 0; i < IMAGE_SIZE; i++) { 
        for (j = 0; j < IMAGE_SIZE; j++) { 
            temp = image[i][j]; 
  
            // Writing the gray values in the 2D array to the file 
            fprintf(pgmimg, "%d ", temp); 
        } 
        fprintf(pgmimg, "\n"); 
    } 
    fclose(pgmimg); 
} 
