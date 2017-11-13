SOURCE=Main.c Qsolve.c MyLog.c Qsolve.h MyLog.h
OUTPUT=qsolve
FLAGS=-Wall -pedantic -std=c99 -lm

compile:
	gcc ${FLAGS} -o ${OUTPUT} ${SOURCE}

clean:
	rm ${OUTPUT}
