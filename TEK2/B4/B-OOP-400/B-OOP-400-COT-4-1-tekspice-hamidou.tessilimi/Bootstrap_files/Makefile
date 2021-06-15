################################################################################
#                                                                              #
#                   Makefile for list project                                  #
#                   Made by David GIRON & Maxime MONTINET                      #
#                                                                              #
################################################################################


DIRS=		$(shell find . -type d -name 'step*')
DISTNAME =	1_retour_sur_le_c++

all:
	for d in $(DIRS); \
		do \
		$(MAKE) -C $$d ;\
		done


re:	fclean
	for d in $(DIRS); \
		do \
		$(MAKE) -C $$d ;\
		done


clean:
	for d in $(DIRS); \
		do \
		$(MAKE) -C $$d clean;\
		done


fclean:
	for d in $(DIRS); \
		do \
		$(MAKE) -C $$d fclean;\
		done
	/bin/rm -f $(DISTNAME).tar.gz


doc:
	for d in $(DIRS); \
		do \
		$(MAKE) -C $$d doc;\
		done

dist:	fclean
	tar -cvzf $(DISTNAME).tar.gz Makefile README $(DIRS)

################################################################################
