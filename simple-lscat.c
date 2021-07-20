#include <stdio.h>

#include <dirent.h>

#include <string.h>

  

int main(void)

{

    struct dirent *de;  // Pointer for directory entry

  

    // opendir() returns a pointer of DIR type.  

    DIR *dr = opendir(".");

  

    if (dr == NULL)  // opendir returns NULL if couldn't open directory

    {

        printf("Could not open current directory" );

        return 0;

    }

    // for readdir()

while ((de = readdir(dp)) != NULL)

    {
        
        pit_t pid;
        
        fork();

        char buf1[1024];

        int buflen;

        // checking the file extension for .c

        if (strcmp(file_extension(de->d_name), ".c") == 0)

        {
        
            pit_t pid;
        
            fork();
            
            // opening the file

            int fd = open(de->d_name, O_RDONLY);

            printf("* Start of the file: %s * \n\n", de->d_name);

            while ((n = read(fd, buf, BUFFSIZE)) > 0)

            {

                if (write(STDOUT_FILENO, buf, n) != n)

                {

                    fprintf(stderr, "write error\n");

                    exit(1);

                }

            }

            printf("\n* end of the file: %s * \n\n", de->d_name);

        }
       

    }

    closedir(dr);     

    return 0;
