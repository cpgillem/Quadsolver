SOURCE=Main.c Qsolve.c validate.c MyLog.c Qsolve.h MyLog.h validate.h
OUTPUT=qsolve
FLAGS=-Wall -pedantic -std=c99

all:
	gcc ${FLAGS} -o ${OUTPUT} ${SOURCE} -lm

no_log:
	gcc ${FLAGS} -o ${OUTPUT} ${SOURCE} -lm

run:
	gcc ${FLAGS} -o ${OUTPUT} ${SOURCE} -lm
	./${OUTPUT}
auto:
	gcc ${FLAGS} -o ${OUTPUT} ${SOURCE} -lm
	./${OUTPUT} <auto.txt

clean:
	rm ${OUTPUT}
