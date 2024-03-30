#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc,char *argv[])
{
    char *stdId = "2021076935";
    printf(1,"My student id is %s\n",stdId);
    int mypid = getpid();
    int gpid = getgpid();

    printf(1,"My pid is %d\n",mypid);
    printf(1,"My gpid is %d\n",gpid);
    exit();
}

    