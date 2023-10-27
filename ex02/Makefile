# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 11:49:28 by phudyka           #+#    #+#              #
#    Updated: 2023/10/26 18:47:17 by phudyka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET		= PhoneBook 

CXX 		= c++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= tests.cpp	Account.cpp \

OBJS		= $(SRCS:.cpp=.o)

DEPS		= Account.hpp	\

.PHONY: all clean fclean re

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
