#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
* Dealing with input and output in C.
*/


//read from  file 

The following example reads data from the file associated 
with the file descriptor fd into the buffer pointed to by buf.

#include <sys/types.h>
#include <unistd.h>
...
char buf[20];
size_t nbytes;
ssize_t bytes_read;
int fd;
...
nbytes = sizeof(buf);
bytes_read = read(fd, buf, nbytes);
...
read tries to read upto nbytes file descriptor fd into the buffer starting at buf.

//file descriptor read
#include <unistd.h>
ssize_t read(int fd, void *buf, size_t count);

read() attempts to read up to count bytes from file 
descriptor fd into the buffer starting at buf.

//write to a file

The following example writes data from the buffer pointed to by buf to the file 
associated with the file descriptor fd.
#include <sys/types.h>
#include <string.h>
...
char buf[20];
size_t nbytes;
ssize_t bytes_written;
int fd;
...
strcpy(buf, "This is a test\n");
nbytes = strlen(buf);

bytes_written = write(fd, buf, nbytes);
...

//file descriptor write
#include <unistd.h>
ssize_t write(int fd, const void *buf, size_t count);
write() writes up to count bytes from the buffer pointed buf 
to the file referred to by the file descriptor fd.


//close descriptor
#include <unistd.h>
int close(int fd);

close() closes a file descriptor, so that it no longer
refers to any file and may be reused.

//
STDERR_FILENO
    File number of stderr; 2.
STDIN_FILENO
    File number of stdin; 0.
STDOUT_FILENO
    File number of stdout; 1.

/**
* read_textfile : reads text file and prints it to POSIX stdout.
* @filename: pointer to the name of the file.
* @letters: letters is the number of letters to should read and print.
*/
//a function that reads a text file and prints it to the POSIX standard output
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t o, r , w ;
    char *buff;//stores the variable that is supposed to be taken in input

    if(filename == NULL)
        return(0);
    buff = malloc(sizeof(char)* letters);
    if(buff == NULL);
        return(0);
    //open the file
    o = open(filename,O_RDONLY);
    //read the file 
    r = read(o, buf, letters);
    //write to the file
    w = write(1, buf , r);

    //loop thru the mode to see if they fail or not
    if(o == -1 || r == -1 || w == -1 || w != r)
    {
        free(buf);
        return(0);
    }
    //free allocated memory
    free(buf);
    //close the file descriptor 
    close(o);
    //return the contents 
    return(w);
}