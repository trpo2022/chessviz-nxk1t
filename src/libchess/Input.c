#include <libchess/Input.h>

void Input(char* input_step)
{
    while (1) {
        printf("\nEnter white and black steps: ");
        gets(input_step);
        if (strlen(input_step) == step)
            break;
    }
}
