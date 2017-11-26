vpath %.c user/ freertosv9/ freertosv9/portable/GCC/posix/ freertosv9/portable/MemMang/

# freertos
objs = list.o tasks.o timers.o queue.o croutine.o event_groups.o
# linux port
objs += heap_4.o port.o
# user code
objs += main.o

CFLAGS += -Iuser/ \
		  -Ifreertosv9/ \
		  -Ifreertosv9/include/ \
		  -Ifreertosv9/portable/GCC/posix/

all: demo

demo: $(objs)
	gcc -o $@ $+ -pthread

clean:
	rm -rf demo *.o
