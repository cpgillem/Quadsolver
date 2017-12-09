OUTPUT=testing
FLAGS=-Wall -pedantic -std=c99

unittest:
	gcc ${FLAGS} -o ${OUTPUT} Unittest.c cunit.c cunit.h Qsolve.h validate.h Qsolve.c validate.c -lm
	./${OUTPUT}

input:
	gcc ${FLAGS} -o ${OUTPUT} Input.c
	./${OUTPUT}

ainput:
	gcc ${FLAGS} -o ${OUTPUT} Input.c
	./${OUTPUT} <inputTest.txt

mylog:
	gcc ${FLAGS} -o ${OUTPUT} MyLog.c
	./${OUTPUT}

validate:
	gcc ${FLAGS} -o ${OUTPUT} avalidate.c -lm
	./${OUTPUT}

avalidate:
	gcc ${FLAGS} -o ${OUTPUT} avalidate.c -lm
	./${OUTPUT} <validateTest.txt

qsolve:
	gcc ${FLAGS} -o ${OUTPUT} Qsolve.c validate.c -lm
	./${OUTPUT}

aqsolve:
	gcc ${FLAGS} -o ${OUTPUT} Qsolve.c validate.c -lm
	./${OUTPUT} <qSolveTest.txt

clean:
	rm ${OUTPUT}
