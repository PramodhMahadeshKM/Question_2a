/**
 * @file data.h
 * @author PramodhMahadeshKM (pramodhmahadesh@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __DATA_H__
#define __DATA_H__
/**
 * @brief Structure to store info which are name,email,Git_link
 * 
 */

typedef struct info_t
{
   char name[100];
   char mail[100];
   char Git_link[100];
} info_t;

extern info_t* arr;

/**
 * @brief This function is to read the csv file
 * 
 * @param file_name name of the csv file to read
 * @param arr pointer to an array
 * @return int returns 1 on success and 0 on failure
 */
int read_arr(char* file_name);

/**
 * @brief This function displays the info read fro csv file
 * 
 * @param temp pointer to the array of struct
 * @return int returns 1 on success and 0 on failure
 */
int display(info_t *temp);

/**
 * @brief This function sorts the array of struct
 * 
 * @param temp pointer to the array of struct
 * @return int returns 1 on success and 0 on failure
 */
int sort(info_t *temp);

#endif