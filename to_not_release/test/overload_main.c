/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   overload_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrause <jkrause@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 14:00:20 by jkrause           #+#    #+#             */
/*   Updated: 2017/06/18 14:34:01 by jkrause          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void dyn_resize(void **ptr, int *csize)
{
  int *gucci = malloc(*csize + (sizeof(int)));
  *ptr = gucci;
  *csize += sizeof(int);
}

int main()
{
  int *s = malloc(sizeof(int) * 1);
  int *csize = 1;
  for (int i = 0; i < 102400; i++)
  {
    printf("%d\n", i);
    dyn_resize(&s, &csize);
    s[i] = s[i];
  }
}
