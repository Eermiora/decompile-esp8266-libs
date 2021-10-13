CC=xtensa-lx106-elf-gcc
NM=xtensa-lx106-elf-nm
ELF=test_phy.elf
LDFLAGS=-nostartfiles -nodefaultlibs -g
LIB=libphy.a
INTERMEDIATE_ELF=libphy.elf
UND_SYMBOLS=undefined_symbols.txt

all: $(ELF)

$(ELF): $(LIB) dummy.o
	$(CC) $(LDFLAGS) -Wl,--whole-archive $(LIB) -Wl,--no-whole-archive dummy.o -o $@

clean:
	rm -f dummy.o dummy.c $(ELF) $(INTERMEDIATE_ELF) $(UND_SYMBOLS)

$(INTERMEDIATE_ELF):
	$(CC) $(LDFLAGS) -o $@ -r -Wl,--whole-archive $(LIB) -Wl,--no-whole-archive -nostartfiles

$(UND_SYMBOLS): $(INTERMEDIATE_ELF)
	$(NM) -P -u $^ | cut -d ' ' -f 1 > $(UND_SYMBOLS)
	echo "_start" >> $(UND_SYMBOLS)

dummy.c: $(UND_SYMBOLS)
	cat $^ | cut -d ' ' -f 1 | awk '{ print "void " $$1 "(void) {}" }' > $@

.PHONY: all clean
