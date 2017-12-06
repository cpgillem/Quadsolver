SOURCE=Main.c Qsolve.c MyLog.c Qsolve.h MyLog.h
OUTPUT=qsolve
FLAGS=-Wall -pedantic -std=c99

all:
	gcc ${FLAGS} -o ${OUTPUT} ${SOURCE} -lm

no_log:
	gcc ${FLAGS} -o ${OUTPUT} ${SOURCE} -lm

test:
	gcc ${FLAGS} -o ${OUTPUT} ${SOURCE} -lm
	./${OUTPUT} <test.txt

clean:
	rm ${OUTPUT}
