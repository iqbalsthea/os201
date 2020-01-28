/*
 * Copyright (C) 2017-2019 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * REV04 Tue Nov 26 11:39:10 WIB 2019
 * REV03 Tue May  7 20:16:22 WIB 2019
 * REV02 Fri May 18 14:02:12 WIB 2018
 * REV01 Thu Apr 12 20:37:41 WIB 2018
 * START Wed Oct 18 18:20:27 WIB 2017
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#define FILE "72-os172-demo.txt"

void main(void) {
   int fd1, fd2;
   printf("See also file %s\n", FILE);
   fd1 = open (FILE, O_RDWR | O_CREAT | O_TRUNC, 0644);
   fd2 = dup(fd1);
   write (fd1, "0123456789\n", 5);
   write (fd2, "abcdefghij\n", 5);
   close(fd1);
   close(fd2);
}
