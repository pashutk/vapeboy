CPATH = /opt/gbdk/bin/lcc

CC = $(CPATH) -Wa-l -Wl-m

ROM = game.gb
SRCS = src/game.c \
       src/game_states.c \
       src/title_state.c \
       src/tiledata_titlescreen.c

all: $(ROM)

$(ROM): $(SRCS)
	$(CC) -o $(ROM) $(SRCS)
