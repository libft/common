TMP_SUFFIX := $(shell echo $$$$)

ifeq ($(MAKECMDGOALS),)
ifeq ($(NAME),)
$(error No NAME found)
else

all: $(NAME)
.PHONY: all

$(NAME): $(shell find src -type f -name "*.c" | cut -c 4- | sed s/\\.c\$$/.o/ | sed s/^/obj/)
	mkdir -p tmp
	ar cr tmp/libft_common.$(TMP_SUFFIX).a $^
	rm -f $@
	mkdir -p $(@D)
	mv tmp/libft_common.$(TMP_SUFFIX).a $@

endif
endif

obj/%.o: src/%.c
	rm -f $@.tmp $@
	mkdir -p $(@D)
	$(CC) $(CPPFLAGS) -I include $(CFLAGS) -c -o $@.tmp $<
	mv $@.tmp $@

.PHONY: clean
clean:
	rm -rf obj tmp

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.NOTPARALLEL: re
.PHONY: re
re: fclean
	$(MAKE) all

.NOTPARALLEL: install
.PHONY: install
install:
ifeq ($(INSTALL_DIR),)
	@([ -t 2 ] && printf "\033[0;31m[ERROR]\033[0m" || printf "[ERROR]") 1>&2 && printf " No INSTALL_DIR given.\n" 1>&2 && false
else
	mkdir -p $(INSTALL_DIR)/lib $(INSTALL_DIR)/include $(INSTALL_DIR)/include
	NAME=$(INSTALL_DIR)/lib/libft_common.a $(MAKE)
	cp -f include/*.h $(INSTALL_DIR)/include
	cp -rf src/* $(INSTALL_DIR)/src
endif
