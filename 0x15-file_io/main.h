#ifndef MAIN_H
#define MAIN_H

/*
 * File: holberton.h
 * Auth: Dovi Norbert
 * Desc: The Header file contains the prototypes for all the fuctions
 *       written in the 0x14-file_io directory.
 */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
