CC = gcc
CFLAGS = -g
LINK = -lsdl2 -lsdl2_image
TARGET = main.c
PROJECT_NAME = ElvesGoneRouge

make:
	$(CC) $(LINK) $(TARGET) -o $(PROJECT_NAME)

run:
	./ElvesGoneRouge
