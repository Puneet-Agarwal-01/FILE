#include<stdio.h>
int main()
{
      FILE *fp;
      char ch , c[100];
      int i,pos;
      fp=fopen("fresh.txt","r");
      if(fp==NULL)
      {
            printf("File does not exist..");
      }
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      //printf("Current postion is %d\n",pos);
      i=0;
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            //printf("%c",fgetc(fp));
            ch=fgetc(fp);
            printf("%c",ch);
      }
      fclose(fp);
      fp = fopen("fresh.txt","r");

    fscanf(fp, "%[^\n]%*c", c);
    fclose(fp);
    fp = fopen("input.txt","w");

    fprintf(fp, "%s",c);
    fclose(fp);

      return 0;
}
