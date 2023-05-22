/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 18:08:35 by ouel-maj          #+#    #+#             */
/*   Updated: 2023/01/16 13:16:26 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*read_and_stash(int fd, char *stash);
char	*extract_line(char *line_in);
char	*clean_up(char *line_in);
char	*get_next_line(int fd);
int		search_newline(char *s);
void	*cleanup_while(char *line_in, char *cleaned_line, int len);
#endif
