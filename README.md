FreeRTOS v9 POSIX demo project
==============================

This will help you to write simple freertos apps on Linux.

File list
---------

```
.
├── freertosv9
│   ├── croutine.c
│   ├── event_groups.c
│   ├── include
│   │   ├── croutine.h
│   │   ├── deprecated_definitions.h
│   │   ├── event_groups.h
│   │   ├── FreeRTOS.h
│   │   ├── list.h
│   │   ├── mpu_prototypes.h
│   │   ├── mpu_wrappers.h
│   │   ├── portable.h
│   │   ├── projdefs.h
│   │   ├── queue.h
│   │   ├── semphr.h
│   │   ├── StackMacros.h
│   │   ├── stdint.readme
│   │   ├── task.h
│   │   └── timers.h
│   ├── list.c
│   ├── portable
│   │   ├── GCC
│   │   │   └── posix
│   │   │       ├── port.c
│   │   │       └── portmacro.h
│   │   └── MemMang
│   │       └── heap_4.c
│   ├── queue.c
│   ├── readme.txt
│   ├── tasks.c
│   └── timers.c
├── Makefile
└── user
    ├── FreeRTOSConfig.h
    └── main.c
```

Note
----

Files in `freertosv9/portable/GCC/posix` come from below project:

    https://github.com/michaelbecker/freertos-addons.git

Other files except for the `main.c` comes from official FreeRTOS v9 release.


