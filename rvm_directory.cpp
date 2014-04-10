/*
 * rvm_directory.cpp
 *
 *  Created on: Apr 7, 2014
 *      Authors: Anish K. and Nikita G.
 */

#include "rvm_directory.h"
#include<dirent.h>
#include<string>
using namespace std;

/*
 * TODO:
 * 1. Complete all interface definitions.
 */

/*
 * @function		rvm_dir_check_exists
 * @brief			Checks if directory exists
 * @param[dir_name]	Name of directory
 * @return			1 if exists, 0 if it doesn't
 */
int rvm_dir_check_exists(char * dir_name)
{
	DIR *directory = opendir(dir_name);
	if(directory != NULL)
	{
		rvm_dir_t *temp, *dir_head;
		temp = dir_head;

		while(temp != NULL)
		{
			if(strcmp(dir_name, temp->dir_name) == 0)
			{
				cout << "File present in directory list";

			}
			temp = temp->dir_next;
			return 2;
		}

		if(strcmp(dir_name,temp->dir_name) != 0)
		{
			return 1;
		}
	}

	return 0;
}

/*
 * @function		rvm_dir_mkdir
 * @brief			Makes a directory at current location
 * @param[dir_name]	Name of directory
 * @return			1 if successful, 0 if erroneous
 */
int rvm_dir_mkdir(char * dir_name)
{

}

/*
 * @function		rvm_dir_create
 * @brief			Populates the directory structure and appends to the end of the directory linked list.
 * @param[dir_name]	Name of directory
 * @return			Directory ID
 */
rvm_t rvm_dir_create(char * dir_name)
{

}

/*
 * @function		rvm_dir_get
 * @brief			Returns the directory structure by looking up with dir_id
 * @param[dir_id]	Directory ID
 * @return			rvm_t dir_id
 */
rvm_dir_t rvm_dir_get(rvm_t dir_id)
{

}
