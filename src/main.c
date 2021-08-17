/*
 * Author      : Prajwal Chapagain <prajjwal2058@gmail.com>
 * Date        : Sunday Aug 15, 2021 17:06:08 NPT
 * License     : MIT
 */

#include <stdio.h>
#include <stdlib.h>

static void
display_usage(FILE *stream)
{
    fprintf(stream, "Usage: ./reverse_reverser <msg>\n");
}

int main(int argc, char **argv)
{
    // check for message
    if (argc < 2) {
        fprintf(stderr, "message is not provided\n");
        display_usage(stderr);
        exit(EXIT_FAILURE);
    }

    printf("message: %s\n", argv[1]);
    return 0;
}

