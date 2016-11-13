CPATH = /opt/gbdk/bin/lcc

CC = $(CPATH) -Wa-l -Wl-m

ROM = game.gb
SRCS = src/game.c \
       src/helpers.c \
       src/game_sprite_object.c \
       src/game_states.c \
       src/title_state.c \
       src/game_state.c \
       src/tiledata_titlescreen.c

all: $(ROM)

$(ROM): $(SRCS)
	$(CC) -o $(ROM) $(SRCS)

clean:
	rm *.map $(ROM)
