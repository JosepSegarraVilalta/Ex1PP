#include <stdio.h>
#include <string.h>

int main()
{
  
  int size, height, width;
  FILE file;
  char path[100] = "image.bmp";
  
  file = fopen(path,"rb");
  if(file==NULL) {
    printf("couldn't open the file"); 
  }
  else {
    fseek(file, 2, SEEK_SET);
    fread(&size, 4, 1, file);
    fseek(file, 12, SEEK_CUR);
    fread(&width, 4, 1, file);
    fread(&height, 4, 1, file);
  }
/*FILE *fp, *fp2;

struct image {
int header,size,date;
} testimage, testimage2;

int x;
fp = fopen("C:/Users/josep/OneDrive/Imágenes/Saved Pictures/image","wb");
printf("please enter the header value: ");
scanf("%d", &testimage.header);
printf("\nEnter the size value: ");
scanf("%d", &testimage.size);
printf("\nEnter the date value: ");
scanf("%d, &testimage.date");
fwrite(&testimage,sizeof(struct image), 1, fp);
fclose(fp);*/
}
