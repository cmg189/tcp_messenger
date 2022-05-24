all: alpha bravo

alpha: alpha_server.c alpha.h
	gcc -o alpha alpha_server.c

bravo: bravo_client.c bravo.h
	gcc -o bravo bravo_client.c

clean:
	rm alpha bravo
