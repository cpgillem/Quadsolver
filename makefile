SOURCE=Main.c Qsolve.c
OUTPUT=qsolve
FLAGS=-Wall -pedantic

compile: Main.c Qsolve.c
	gcc ${FLAGS} -o ${OUTPUT} ${SOURCE}

clean:
	rm ${OUTPUT}
