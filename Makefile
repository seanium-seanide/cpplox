#############
# Variables #
#############

PROJNAME := cpplox
SRCDIR := src
INCDIR := include
BUILDDIR := build
OBJDIR := $(BUILDDIR)/obj
BINDIR := $(BUILDDIR)/bin

CC := clang++
CFLAGS := -Wall -std=c++17 -I$(INCDIR)
LDFLAGS := -lfmt

BIN := $(BINDIR)/$(PROJNAME)

OBJ := $(OBJDIR)/main.o
OBJ += $(OBJDIR)/Lox.o
OBJ += $(OBJDIR)/ErrorReporter.o
OBJ += $(OBJDIR)/Token.o
OBJ += $(OBJDIR)/Scanner.o

###########
# Recipes #
###########

all: $(BIN)

$(BIN): $(OBJ)
	@mkdir -p $(BINDIR)
	$(CC) -o $@ $^ $(LDFLAGS)

$(OBJDIR)/main.o: $(SRCDIR)/main.cpp Makefile
	@mkdir -p $(OBJDIR)
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJDIR)/Lox.o: $(SRCDIR)/Lox.cpp $(INCDIR)/Lox.hpp Makefile
	@mkdir -p $(OBJDIR)
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJDIR)/ErrorReporter.o: $(SRCDIR)/ErrorReporter.cpp $(INCDIR)/ErrorReporter.hpp Makefile
	@mkdir -p $(OBJDIR)
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJDIR)/Token.o: $(SRCDIR)/Token.cpp $(INCDIR)/Token.hpp Makefile
	@mkdir -p $(OBJDIR)
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJDIR)/Scanner.o: $(SRCDIR)/Scanner.cpp $(INCDIR)/Scanner.hpp Makefile
	@mkdir -p $(OBJDIR)
	$(CC) -c $(CFLAGS) -o $@ $<

#################
# Phony Targets #
#################

.PHONY: clean
clean:
	rm -rf $(BUILDDIR)

.PHONY: run
run:
	@./$(BIN)
