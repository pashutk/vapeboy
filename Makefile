CPATH = /opt/gbdk/bin/lcc

CC = $(CPATH) -Wa-l -Wl-m

ROM = game.gb
SRCS = src/game.c

all: $(ROM)

$(ROM): $(SRCS)
	$(CC) -o $(ROM) $(SRCS)
