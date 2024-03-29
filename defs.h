
#ifndef DEFS_H_
#define DEFS_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/syscall.h>

#define NR_TASKS			50
#define BUF_SIZE			10000

#define OFFSET				1000000000



#define	__NR_casio_sched_setscheduler  	338
#define	__NR_casio_delay_until 		339
#define	__NR_casio_trace_init  		340
#define	__NR_casio_clock		341

struct task {
	int task_id;
	unsigned long long exec;
	unsigned long long period;
	unsigned long long deadline;
	unsigned long priority;
	unsigned long long offset;
};

#endif
