int main()
{
FILE *fp, *fp2;

struct image {
int header,size,date;
} testimage, testimage2;

int x;
fp = fopen("","wb");
printf("please enter the header value: ");
scanf("%d", &testimage.header);
printf("\nEnter the size value: ");
scanf("%d", &testimage.size);
printf("\nEnter the date value: ");
scanf("%d, &testimage.date");
fwrite(&testimage,sizeof(struct image), 1, fp);
fclose(fp);
