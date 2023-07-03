ifeq ($(NAME),)
$(error No name found)
endif

all: $(NAME)
.PHONY: all

TMP_SUFFIX := $(shell echo $$$$)

$(NAME): $(shell find src -type f -name "*.c" | cut -c 4- | sed s/\\.c\$$/.o/ | sed s/^/obj/)
	mkdir -p tmp
	ar cr tmp/libft_common.$(TMP_SUFFIX).a $^
	rm -f $@
	mkdir -p $(@D)
	mv tmp/libft_common.$(TMP_SUFFIX).a $@

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
