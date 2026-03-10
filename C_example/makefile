SRC = $(wildcard *.c)        # 현재 폴더의 모든 .c 파일
TARGET = $(SRC:.c=)          # .c 제거 → 실행파일 이름

all : ${TARGET}

%: %.c
	gcc $< -o $@

clean :
	rm ${TARGET}