#include <stdio.h>
#include <string.h>

int main() {
    char userInput[100];

    printf("Hello! I am your AI assistant.\n");
    
    while (1) {
        printf("You: ");
        fgets(userInput, sizeof(userInput), stdin);

        if (strncmp(userInput, "hello", 5) == 0) {
            printf("AI: Hello! How can I assist you?\n");
        } else if (strncmp(userInput, "what is your name", 17) == 0) {
            printf("AI: I am your AI assistant.\n");
        } else if (strncmp(userInput, "quit", 4) == 0) {
            printf("AI: Goodbye! Have a nice day.\n");
            break;
        } else {
            printf("AI: Sorry, I did not understand that.\n");
        }
    }

    return 0;
}
