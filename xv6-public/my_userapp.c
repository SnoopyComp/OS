#include "types.h"
#include "stat.h"
#include "user.h"

int 
main(int argc, char *argv[])
{
    char *buf = "Hello xv6!";
    int ret_val;
    ret_val = myfunction(buf);
    printf(1,"Returned value: 0x%x\n",ret_val);
    printf(1,"pid: %d\n",getpid());
    exit();
}