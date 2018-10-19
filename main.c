/* This program allos the user to enter any string.
 * The string is evaluated and then show it
 * in reverse form.
 *
 * Author: Hugo Aguirre
 * Date: October 18th, 2018
  */

#include <stdio.h>
#include <string.h>


int main() {

    //Variable declaration
    char arr[100];

    // welcome the user and askk for the string
    printf("Welcome user, please, enter a string:\n");
    fgets(arr, sizeof(arr), stdin);


    //Print the reverse of the string
    printf("Reverse of the string is: \n");
    for (int i = strlen(arr); i > 0; i--) {
        printf("%c", arr[i - 1]);
    }

    return 0;
}