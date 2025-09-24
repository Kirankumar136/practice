# Define the object files
OBJS = main.o big3.o fact.o pal.o

# Define the executable name
EXEC = ABC.exe

# Rule to build the final executable
$(EXEC): $(OBJS)
	gcc -o $(EXEC) $(OBJS)

# Rule to compile each C file into an object file
%.o: %.c
	gcc -c $<

# Clean up build artifacts
clean:
	rm -f $(OBJS) $(EXEC)
