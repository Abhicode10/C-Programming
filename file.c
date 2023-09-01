#include <stdio.h>

int main() {
   FILE *file;
   char data[100];
   
   // Open the file in write mode
   file = fopen("example.txt", "w");

   if (file == NULL) {
      printf("Could not create the file.\n");
      return 1;
   }

   // Write data to the file
   printf("Enter data to write to the file: ");
   fgets(data, sizeof(data), stdin);
   fprintf(file, "%s", data);
   
   // Close the file
   fclose(file);

   // Open the file in read mode
   file = fopen("example.txt", "r");

   if (file == NULL) {
      printf("Could not open the file.\n");
      return 1;
   }

   // Read data from the file
   printf("Data read from the file: ");
   while (fgets(data, sizeof(data), file) != NULL) {
      printf("%s", data);
   }
   
   // Close the file
   fclose(file);

   return 0;
}
