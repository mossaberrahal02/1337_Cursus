!!!!!!!!!!!!sooooo the purpose of the--->int c in thos ft_is...() functions--->is to cover big range of values negative
	- positive values so we can include tthe EOF constant "it's a negative value" and
	to cover the printable -
		nonprintable characters ont the contrary if we used only char c in the arguments it will cover only 127 value !!!!!!!!!!!!

		ft_memcpy(void *dest, const void *src, size_t n);

1) lets talk abt the null pointer
    pointers can have a special value called NULL pointer ----> 
    means they don't point to anything
    (the null pointer is used to indicate that a pointer does not 
    curently refrence a valid memory location)
2) pointer type casting is when you converting a pointer from a data
    type to another and we do this process when we want to access 
    the same block of memory with a diffrent data type
3) it copie byte by byte so when we caast the int* to the unsigned char * ghadi 
    tched byte lowla dyal int treje3ha cunsg char w li moraha w li moraha w li 
    mraha ye3ni 4 t7ethom hda be3diyathom w ye3tiwna dik int li kan 3edna 3la 
    chkel des char
4) !!!!!!!!! Sign extension is typically used when promoting a value from a smaller data type to a larger one so this is why we used unsigned to avoid the sign extention

ft_memmove(void *dest, const void *src, size_t n);

1) in the first case when we have two conditions i ensure that the overlap will 100% 
happens theeeen i'll use the first case (if i remove the condition of s
	+ n > d) the 
instructions inside the first if could be compiled iven there is no overlapping and 
in the seconde case it'll be compiled only if there is no overlapping 

ft_strlcpy(char *dest, const *src, size_t dstsize)

1) the strlcpy means the length of src

char	*ft_substr(char const *s, unsigned int start, size_t len);

if (len > ft_strlen(s) - start)
	len = ft_strlen(s) - start;
/* f halet ma bghina nakhdou 4 characters m wahed string li fih ghir 10 characters w 3tana
len twiiiil for exemple 100 so all good and we need to allocate 100
	+ 1 case in the heape
so this is too much,
	as solution we reduce the len to as much as there is more characters
after the start point  */
if (!len || start > ft_strlen(s))
	return (ft_strdup(""));

------------------ >>>> MAKEFILE<<<<------------------

													targets : prerequisites command command command

													--->>>>> !!!the essence of make is to see if the prerequisites has changed so it decide to recompile it or
	not

		hello : echo "Hello, World"

				blah : blah.c hna had blah.c li zedna hna kolma ka n modifyiw blah.c file bhal ka t updata l compilation ila ma dernahach hna cf gha tyeb9a target ye3tamed ghir 3la l compilation lowla cc blah.c
					-
		o blah

			blah : blah.o cc blah.o -
		o blah blah.o : blah.c cc - c blah.c -
		o blah.o blah.c : echo "
							int
							main()
{
	printf("hadi hiya blah jdida");
}
	" > blah.c

hello:
	echo "Hello, World"
	echo "This line will print if the file hello does not exist."

--->> Make clean


files := file1 file2
some_file: $(files)
	echo "Look at this variable: " $(files)
	touch some_file

file1:
	touch file1
file2:
	touch file2

clean: bach tekhdem hadi khas ndir f cmd make clean hit its not default
	rm -f file1 file2 some_file

variables is only strings
a := one two  				a is set to the string "one two"
b := 'one two'  			Not recommended. b is set to the string "'one two'"
all:
	printf '$a'
	printf $b
	echo $(x)	&&  echo ${x} are the same
	--->> echo $x Bad practice, but works

--->>> targets (predefined)

1) exemple
all: one two three clean

one:
	touch one
two:
	touch two
three:
	touch three
clean:
	rm -f one three two

2) exemple

hey: one two
#Outputs "hey", since this is the target name
	echo $@

#Outputs all prerequisites newer than the target
	echo $?

#Outputs all prerequisites
	echo $^

	touch hey

one:
	touch one

two:
	touch two

clean:
	rm -f hey one two

3) wildcard and automatic variables

#Print out file information about every.c file
print: $(wildcard *.c)
	ls -la  $?
thing_wrong := *.o # Don't do this! '*' will not get expanded
thing_right := $(wildcard *.o)

all: one two three four

#Fails, because $(thing_wrong) is the string "*.o"
one: $(thing_wrong)

#Stays as *.o if there are no files that match this pattern
two: *.o

#Works as you would expect !In this case, it does nothing.
three: $(thing_right)

#Same as rule three
four: $(wildcard *.o)