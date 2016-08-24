SUBDIRS = \
  src \

.PHONY: default
default: all

.PHONY: all
all:
	for subdir in $(SUBDIRS); do \
		( cd $$subdir && make -$(MAKEFLAGS) all ) || exit 1; \
	done

.PHONY: clean
clean:
	for subdir in $(SUBDIRS); do \
		( cd $$subdir && make -$(MAKEFLAGS) clean ) || exit 1; \
	done
