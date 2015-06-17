main: main.o genMino.o Mino.o MinoI.o MinoS.o MinoL.o MinoO.o MinoT.o
	g++ -o main main.o genMino.o Mino.o MinoI.o MinoS.o MinoL.o MinoO.o MinoT.o
genMino.o: genMino.cpp genMino.h Mino.h MinoS.h MinoI.h MinoL.h MinoO.h MinoT.h
	g++ -c genMino.cpp
main.o: main.cpp genMino.h
	g++ -c main.cpp
Mino.o: Mino.cpp
	g++ -c Mino.cpp
MinoI.o:Mino.h MinoI.cpp MinoI.h
	g++ -c MinoI.cpp 
MinoS.o:Mino.h MinoS.cpp MinoS.h
	g++ -c MinoS.cpp
MinoL.o:Mino.h MinoL.cpp MinoL.h
	g++ -c MinoL.cpp
MinoO.o:Mino.h MinoO.cpp MinoO.h
	g++ -c MinoO.cpp 
MinoT.o:Mino.h MinoT.cpp MinoT.h
	g++ -c MinoT.cpp 
