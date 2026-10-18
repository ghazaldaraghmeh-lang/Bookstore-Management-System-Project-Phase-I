 /*
               Ghazal_Salah_Daraghmeh
                      1230542
                Dr.Alaa_Nairat
                    sec:14/LB

*/

#include <stdio.h>
#include <stdio.h>

        void displayMainMenu();      	 // displays the main menu
            void addBook();                   	// adds information for a new book
             void removeBook();  	   // removes information of old book
              void searchForBook();  	    // searches for a book in the store
    void uploadDataFile();       	// uploads book data from file
       void updateDataFile();            // saves book data updates to file


int main() {

        printf("Welcome to My BookStore Management System:\n");
            printf("\n");
             printf("\n");

int option;

  do {     displayMainMenu();
           scanf("%d",&option);

         switch (option)
           {
             case 1:
                  addBook();
                  break;

             case 2:
                  removeBook();
                  break;

             case 3:
                  searchForBook();
                  break;

             case 4:
                printf("\n");
                updateDataFile();
                break;


             default:
                printf("No such operation!  Please try again.\n");
                printf("\n");
             }

    }  while ( option !=4 );

    return 0;
}



void displayMainMenu()
 {
    printf("Please Select an Operation(1-4):\n");
    printf("1- Add a Book:\n");
    printf("2- Remove a Book:\n");
    printf("3- Search for a Book:\n");
    printf("4- Exit System:\n");
          printf("\n");

}

void addBook() {
    printf("Book info has been added\n");
    printf("\n");
    // Get input(title, bin number, and price)
}

void removeBook() {
    printf("Book info has been removed\n");
    printf("\n");
}

void searchForBook() {
   printf("Book has been searched for\n");
    printf("\n");
}

void uploadDataFile() {
    printf("Uploading data file ...\n");
    printf("Data File uploaded\n");
    printf("\n");
    // Open the data file and read book information
}

void updateDataFile() {
    printf("Updating data file ...\n");
    printf("Data File updated\n");
    printf("\n");
    printf("Thank you for using My BookStore Management  System. GoodBye.");

    // Open the data file and write book information
}
