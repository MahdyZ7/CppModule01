
SUBDIRS = ex00 ex01 ex02 ex03 ex04 ex05 ex06 

all:
	for dir in $(SUBDIRS); do \
        $(MAKE) all -C $$dir; \
    done

clean:
	for dir in $(SUBDIRS); do \
        $(MAKE) clean -C $$dir; \
    done

fclean: clean
	for dir in $(SUBDIRS); do \
        $(MAKE) fclean -C $$dir; \
    done

re : fclean all

.PHONY: clean fclean all re
