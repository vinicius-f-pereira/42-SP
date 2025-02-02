/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <cnatanae@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:41:11 by cnatanae          #+#    #+#             */
/*   Updated: 2023/11/22 15:44:02 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include "get_next_line.h"

/**@brief This structure is a linked list.
 * 
 * @param content The data contained in the node.
 * @param next The pointer to the next node.
*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**@brief Check if the int 'c' is an alphabetical character
 * from the ASCII table.
 *
 * @param c a int
 * @return Int '1' for true or int '0' for false.
 * */
int		ft_isalpha(int c);

/**@brief Checks if the int 'c' is a digit character from the ASCII table.
 *
 * @param c a int
 * @return Int '1' for true or int '0' for false.
 */
int		ft_isdigit(int c);

/**@brief Checks if the int 'c' is a alphanumeric character
 * from the ASCII table.
 *
 * @param c a int
 * @return Int '1' for true or int '0' for false.
 */
int		ft_isalnum(int c);

/**@brief Checks if the int 'c' is in the ASCII table.
 *
 * @param c a int
 * @return Int '1' for true or int '0' for false.
 */
int		ft_isascii(int c);

/**@brief Checks if the int 'c' is a printable character
 * (including space) in the ASCII table.
 *
 * @param c a int
 * @return Int '1' for true or int '0' for false.
 */
int		ft_isprint(int c);

/**@brief Converts the nptr string to an int.
 *
 * @param nptr a string
 * @return The converted int.
 */
int		ft_atoi(const char *nptr);

/**@brief this function convert a char to uppercase.
 *
 * @param c a int char to convert
 * @return The converted int.
 */
int		ft_toupper(int c);

/**@brief this function convert a char to lowercase.
 *
 * @param c a int char to convert
 * @return The converted int.
 */
int		ft_tolower(int c);

/**@brief this function compare two strings.
 *
 * @param s1 a string to compare
 * @param s2 a string to compare
 * @return The difference between the two strings in ASCII.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**@brief this function compare two memomry blocks.
 *
 * @param s1 a memory block to compare
 * @param s2 a memory block to compare
 * @param n the number of bytes to compare
 * @return The difference between the two memory blocks (equal  to,
 * or greater than zero).
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**@brief this function fills a memory block with a null byte.
 *
 * @param s a memory block to fill
 * @param n the number of bytes to fill
 * @return void.
 */
void	ft_bzero(void *s, size_t n);

/**@brief this function count the number of characters in a string.
 *
 * @param s a string
 * @return The number of characters in the string.
 */
size_t	ft_strlen(const char *s);

/**@brief this function copy a string to destination.
 *
 * @param dst a destination string
 * @param src a source string
 * @param size the number of bytes to copy
 * @return The number of bytes copied.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**@brief this function concatenate two strings until the size is reached.
 *
 * @param dst a destination string
 * @param src a source string
 * @param size the number of bytes to concatenate
 * @return The number of bytes concatenated.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**@brief this function search for a little string in a string.
 *
 * @param big a string
 * @param little a string to search
 * @param len the number of bytes to search
 * @return The pointer to the first occurrence of the little string
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**@brief this function fills a memory block with a any byte.
 *
 * @param s a memory block to fill
 * @param c the byte to fill
 * @param n the number of bytes to fill
 * @return the pointer to the memory block.
 */
void	*ft_memset(void *s, int c, size_t n);

/**@brief this function copy a memory block to destination.
 *
 * @param dest a destination memory block
 * @param src a source memory block
 * @param n the number of bytes to copy
 * @return the pointer to the memory block.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**@brief this function copy a memory block to destination.
 * but, From back to front.
 *
 * @param dest a destination memory block
 * @param src a source memory block
 * @param n the number of bytes to copy
 * @return the pointer to the memory block.
 */
void	*ft_memmove(void *dest, const void *src, size_t count);

/**@brief this function search for a byte in a memory block.
 *
 * @param s a memory block
 * @param c the byte to search
 * @param n the number of bytes to search
 * @return The pointer to the first occurrence of the byte
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**@brief this function allocate a memory block.
 * Adding null bytes
 *
 * @param nmemb the number of bytes to allocate
 * @param size the size of each byte
 * @return The pointer to the allocated memory block
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**@brief this function search for a character in a string.
 *
 * @param s a string
 * @param c the character to search
 * @return The pointer to the first occurrence of the character
 */
char	*ft_strchr(const char *s, int c);

/**@brief this function search the last occurrence of a character in a string.
 *
 * @param s a string
 * @param c the character to search
 * @return The pointer to the last occurrence of the character
 */
char	*ft_strrchr(const char *s, int c);

/**@brief this function duplicate a string.
 * in a allocated memory block.
 *
 * @param s a string
 * @return The pointer to the allocated memory block
 */
char	*ft_strdup(const char *s);

/**@brief this function Allocates (with malloc(3)) and returns a substring
 * from the string ’s’.
 * The substring begins at index ’start’ and is of
 * maximum size ’len’.
 *
 * @param s a string
 * @param start the start index
 * @param len the number of bytes to copy
 * @return The pointer to the allocated memory block
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**@brief this function Allocates (with malloc(3)) and returns a new
 * string, which is the result of the concatenation
 * of ’s1’ and ’s2’.
 *
 * @param s1 a string
 * @param s2 a string
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**@brief this function Allocates (with malloc(3)) and returns a copy of
 * ’s1’ with the characters specified in ’set’ removed
 * from the beginning and the end of the string.
 *
 * @param s1 a string
 * @param set a string
 * @return The pointer to the allocated memory block
*/
char	*ft_strtrim(char const *s1, char const *set);

/**@brief this function Allocates (with malloc(3)) and returns an array
 * of strings obtained by splitting ’s’ using the
 * character ’c’ as a delimiter. The array must end
 * with a NULL pointer.
 * 
 * @param s a string to split
 * @param c a character
 * @return The pointer to the allocated memory block with the strings
*/
char	**ft_split(char const *s, char c);

/**@brief this function Allocates (with malloc(3)) and returns a string
 * representing the integer received as an argument.
 * Negative numbers must be handled.
 * 
 * @param n a int
 * @return The pointer to the allocated memory block with the string
 * representing the integer
*/
char	*ft_itoa(int n);

/**@brief this function Applies the function ’f’ to each character of the
 * string ’s’, and passing its index as first argument
 * to create a new string (with malloc(3)) resulting
 * from successive applications of ’f’.
 * 
 * @param s a string
 * @param f a function to apply
 * @return The pointer to the allocated memory block with the string
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**@brief this function Applies the function ’f’ on each character of
 * the string passed as argument, passing its index
 * as first argument. Each character is passed by
 * address to ’f’ to be modified if necessary.
 * 
 * @param s a string
 * @param f a function to apply
 * @return void
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/**@brief this function Outputs the character ’c’ to the given file
 * descriptor.
 * 
 * @param c a char
 * @param fd a file descriptor
 * @return void
*/
void	ft_putchar_fd(char c, int fd);

/**@brief this function Outputs the string ’s’ to the given file
 * descriptor.
 * 
 * @param s a string
 * @param fd a file descriptor
 * @return void
*/
void	ft_putstr_fd(char *s, int fd);

/**@brief this function Outputs the string ’s’ to the given file descriptor
 * followed by a newline.
 * 
 * @param s a string
 * @param fd a file descriptor
 * @return void
*/
void	ft_putendl_fd(char *s, int fd);

/**@brief this function Outputs the integer ’n’ to the given file
 * descriptor.
 * 
 * @param n a int
 * @param fd a file descriptor
 * @return void	
*/
void	ft_putnbr_fd(int n, int fd);

/**@brief this function Allocates (with malloc(3)) and returns a new node.
 * The member variable ’content’ is initialized with
 * the value of the parameter ’content’. The variable
 * ’next’ is initialized to NULL.
 * 
 * @param content a pointer to the content to put in the new node
 * @return The pointer to the allocated memory block with the new node
*/
t_list	*ft_lstnew(void *content);

/**@brief this function Adds the node ’new’ at the beginning of the list.
 * 
 * @param lst a pointer to the first node of the list
 * @param new a pointer to the new node to add
 * @return void
*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/**@brief this function Counts the number of nodes in a list.
 * 
 * @param lst a pointer to the first node of the list
 * @return The number of nodes in the list
*/
int		ft_lstsize(t_list *lst);

/**@brief this function Returns the last node of the list.
 * 
 * @param lst a pointer to the first node of the list
 * @return The pointer to the last node of the list
*/
t_list	*ft_lstlast(t_list *lst);

/**@brief this function Adds the node ’new’ at the end of the list.
 * 
 * @param lst a pointer to the first node of the list
 * @param new a pointer to the new node to add
 * @return void
*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/**@brief this function Takes as a parameter a node and frees the memory of
 * the node’s content using the function ’del’ given
 * as a parameter and free the node. The memory of
 * ’next’ must not be freed.
 * 
 * @param lst a pointer to the node to free
 * @param del the function used to delete the content of the node
 * @return void
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**@brief this function Deletes and frees the given node and every
 * successor of that node, using the function ’del’
 * and free(3).
 * Finally, the pointer to the list must be set to
 * NULL.
 * 
 * @param lst a pointer to the first node of the list
 * @param del the function used to delete the content of the node
 * @return void
*/
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**@brief this function Iterates the list ’lst’ and applies the function
 * ’f’ on the content of each node.
 * 
 * @param lst a pointer to the first node of the list
 * @param f the function to apply
 * @return void
*/
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**@brief this function Iterates the list ’lst’ and applies the function
 * ’f’ on the content of each node. Creates a new
 * list resulting of the successive applications of
 * the function ’f’. The ’del’ function is used to
 * delete the content of a node if needed.
 * 
 * @param lst a pointer to the first node of the list
 * @param f the function to apply
 * @param del the function used to delete the content of the node
 * @return The pointer to the new list
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
