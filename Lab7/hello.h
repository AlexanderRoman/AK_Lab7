#include <linux/ktime.h>
#pragma once

struct mainListHead{
    struct mainListHead *next;
    ktime_t time;
};
