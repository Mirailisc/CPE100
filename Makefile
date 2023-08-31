run:
	echo "Compiling playground.c ..."
	gcc -o run main.c && ./run

clean:
	echo "Cleaning up ..."
	rm -rf run

start:
	make clean && make run
